/**
  Generated Interrupt Manager Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.c

  @Summary:
    This is the Interrupt Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description:
    This header file provides implementations for global interrupt handling.
    For individual peripheral handlers please see the peripheral driver for
    all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F46K42
        Driver Version    :  2.04
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above or later
        MPLAB 	          :  MPLAB X 6.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "interrupt_manager.h"
#include "mcc.h"
#include "math.h"

uint16_t ADC_0_Grados = 0;
uint16_t ADC_90_Grados = 0;
float adc_value = 0.000;
float amplitud = 0;
float angulo = 0;
int bandera = 0;
float puntoDeQuiebre = 0.584;
char buffer[20];


#define BUFFER_SIZE 128  // Ajusta según la memoria disponible y tus necesidades


float map(float x, float in_min, float in_max, float out_min, float out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float sampleBuffer[BUFFER_SIZE];
uint16_t bufferIndex = 0;
float maxSample = 0.0f;



void UART_SendString(const char* str){
    while (*str){
        UART1_Write(*str);
        str++;
    }
}


void  INTERRUPT_Initialize (void)
{
    // Disable Interrupt Priority Vectors (16CXXX Compatibility Mode)
    INTCON0bits.IPEN = 0;
}

void __interrupt() INTERRUPT_InterruptManager (void)
{
    // interrupt handler
    if(PIE9bits.TMR6IE == 1 && PIR9bits.TMR6IF == 1)
    {
        TMR6_ISR();
        
        // Obtener valor de ADC y calcular amplitud
        adc_value = ADCC_GetSingleConversion(ADC_Amplif);
        amplitud = (float)(adc_value * 2.048f) / 4095.0f;
        sampleBuffer[bufferIndex++] = amplitud;

        // Actualizar maxSample
        if (amplitud > maxSample) {
            maxSample = amplitud;
            //sprintf(buffer, "max = %f",maxSample);
            //UART_SendString(buffer);
        }
        

        // Revisar si se ha llenado el buffer y actuar en consecuencia
        if (bufferIndex >= BUFFER_SIZE) {
            bufferIndex = 0; // Reiniciar índice de buffer

            // Si maxSample supera el punto de quiebre, actualizar LED y barra
            if(maxSample >= puntoDeQuiebre) {
                int mapeado = (int)map(maxSample, 0.584, 0.661, 0, 100);

                // Enciende el LED
                sprintf(buffer, "myLed.pic=0\xFF\xFF\xFF");
                UART_SendString(buffer);

                // Actualiza la barra tipo termómetro
                sprintf(buffer, "PA0.nivel.val=%d\xFF\xFF\xFF", mapeado);
                UART_SendString(buffer);
            } 
                
            // Apagar el LED si está por debajo del punto de quiebre
            sprintf(buffer, "myLed.pic=1\xFF\xFF\xFF");
            UART_SendString(buffer);
                       

            // Restablecer maxSample para la siguiente ronda de muestras
            maxSample = 0.0f;
        }
    }
    else
    {
        //Unhandled Interrupt
    }
}
/**
 End of File
*/

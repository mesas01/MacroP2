/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F46K42
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANA0 aliases
#define channel_ANA0_TRIS                 TRISAbits.TRISA0
#define channel_ANA0_LAT                  LATAbits.LATA0
#define channel_ANA0_PORT                 PORTAbits.RA0
#define channel_ANA0_WPU                  WPUAbits.WPUA0
#define channel_ANA0_OD                   ODCONAbits.ODCA0
#define channel_ANA0_ANS                  ANSELAbits.ANSELA0
#define channel_ANA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_ANA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_ANA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_ANA0_GetValue()           PORTAbits.RA0
#define channel_ANA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_ANA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_ANA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_ANA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_ANA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define channel_ANA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define channel_ANA0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define channel_ANA0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set channel_ANA1 aliases
#define channel_ANA1_TRIS                 TRISAbits.TRISA1
#define channel_ANA1_LAT                  LATAbits.LATA1
#define channel_ANA1_PORT                 PORTAbits.RA1
#define channel_ANA1_WPU                  WPUAbits.WPUA1
#define channel_ANA1_OD                   ODCONAbits.ODCA1
#define channel_ANA1_ANS                  ANSELAbits.ANSELA1
#define channel_ANA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_ANA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_ANA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_ANA1_GetValue()           PORTAbits.RA1
#define channel_ANA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_ANA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_ANA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define channel_ANA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define channel_ANA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define channel_ANA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define channel_ANA1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define channel_ANA1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set channel_ANA4 aliases
#define channel_ANA4_TRIS                 TRISAbits.TRISA4
#define channel_ANA4_LAT                  LATAbits.LATA4
#define channel_ANA4_PORT                 PORTAbits.RA4
#define channel_ANA4_WPU                  WPUAbits.WPUA4
#define channel_ANA4_OD                   ODCONAbits.ODCA4
#define channel_ANA4_ANS                  ANSELAbits.ANSELA4
#define channel_ANA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define channel_ANA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define channel_ANA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define channel_ANA4_GetValue()           PORTAbits.RA4
#define channel_ANA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define channel_ANA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define channel_ANA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define channel_ANA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define channel_ANA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define channel_ANA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define channel_ANA4_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define channel_ANA4_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set channel_ANA5 aliases
#define channel_ANA5_TRIS                 TRISAbits.TRISA5
#define channel_ANA5_LAT                  LATAbits.LATA5
#define channel_ANA5_PORT                 PORTAbits.RA5
#define channel_ANA5_WPU                  WPUAbits.WPUA5
#define channel_ANA5_OD                   ODCONAbits.ODCA5
#define channel_ANA5_ANS                  ANSELAbits.ANSELA5
#define channel_ANA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define channel_ANA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define channel_ANA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define channel_ANA5_GetValue()           PORTAbits.RA5
#define channel_ANA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define channel_ANA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define channel_ANA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define channel_ANA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define channel_ANA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define channel_ANA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define channel_ANA5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define channel_ANA5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set ADC_Amplif aliases
#define ADC_Amplif_TRIS                 TRISAbits.TRISA6
#define ADC_Amplif_LAT                  LATAbits.LATA6
#define ADC_Amplif_PORT                 PORTAbits.RA6
#define ADC_Amplif_WPU                  WPUAbits.WPUA6
#define ADC_Amplif_OD                   ODCONAbits.ODCA6
#define ADC_Amplif_ANS                  ANSELAbits.ANSELA6
#define ADC_Amplif_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define ADC_Amplif_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define ADC_Amplif_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define ADC_Amplif_GetValue()           PORTAbits.RA6
#define ADC_Amplif_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define ADC_Amplif_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define ADC_Amplif_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define ADC_Amplif_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define ADC_Amplif_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define ADC_Amplif_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define ADC_Amplif_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define ADC_Amplif_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set channel_ANA7 aliases
#define channel_ANA7_TRIS                 TRISAbits.TRISA7
#define channel_ANA7_LAT                  LATAbits.LATA7
#define channel_ANA7_PORT                 PORTAbits.RA7
#define channel_ANA7_WPU                  WPUAbits.WPUA7
#define channel_ANA7_OD                   ODCONAbits.ODCA7
#define channel_ANA7_ANS                  ANSELAbits.ANSELA7
#define channel_ANA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define channel_ANA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define channel_ANA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define channel_ANA7_GetValue()           PORTAbits.RA7
#define channel_ANA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define channel_ANA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define channel_ANA7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define channel_ANA7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define channel_ANA7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define channel_ANA7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define channel_ANA7_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define channel_ANA7_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set LED_1 aliases
#define LED_1_TRIS                 TRISBbits.TRISB3
#define LED_1_LAT                  LATBbits.LATB3
#define LED_1_PORT                 PORTBbits.RB3
#define LED_1_WPU                  WPUBbits.WPUB3
#define LED_1_OD                   ODCONBbits.ODCB3
#define LED_1_ANS                  ANSELBbits.ANSELB3
#define LED_1_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_1_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_1_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_1_GetValue()           PORTBbits.RB3
#define LED_1_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_1_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_1_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_1_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_1_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define LED_1_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define LED_1_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define LED_1_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set LED_2 aliases
#define LED_2_TRIS                 TRISBbits.TRISB4
#define LED_2_LAT                  LATBbits.LATB4
#define LED_2_PORT                 PORTBbits.RB4
#define LED_2_WPU                  WPUBbits.WPUB4
#define LED_2_OD                   ODCONBbits.ODCB4
#define LED_2_ANS                  ANSELBbits.ANSELB4
#define LED_2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_2_GetValue()           PORTBbits.RB4
#define LED_2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_2_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED_2_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED_2_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define LED_2_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSELC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
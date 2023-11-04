/*
 * File:   FUNCIONES.c
 * Author: mesas
 *
 * Created on November 4, 2023, 12:29 PM
 */


#include "FUNCIONES.h"

/*uint16_t leerADC(){
    uint16_t valorDelADC = 0;
    // 1. Lectura del valor del ADC desde el canal/pin específico (RA6)
    valorDelADC = ADCC_GetSingleConversion(ADC_Amplif);

    // 2. Conversión del valor crudo del ADC a un valor de voltaje.
    // La escala máxima es de 10V (asumido por el factor 10.0) y el ADC es de 12 bits (4095)
    voltage = (float)(adc_value * 10.00f) / 4095.0f; 
    
    // 3. Conversión del valor de voltaje a milivoltios para manejar valores enteros.
    uint16_t temp = (uint16_t)(voltage * 1000 + 0.5); 
  

    // 4. Descomposición del valor entero en dígitos individuales y almacenamiento en el array 'digits'
    for (int i = 0; i < 4; i++){
        digits[i] = temp % 10;  // Extrae el dígito más a la derecha
        temp /= 10;             // Desplaza los dígitos a la derecha
    }
}*/

/**
  Archivo de encabezado: funciones.h

  Descripción:
    Este archivo es un archivo de encabezado que contiene las declaraciones de funciones y estructuras 
    que se utilizarán en el archivo funciones.c. Define la interfaz pública para las funciones y estructuras 
    relacionadas con el filtrado de señales.
*/

// Directiva de preprocesador para evitar la inclusión múltiple del archivo.
#ifndef FUNCIONES_H
#define FUNCIONES_H

// Inclusión de bibliotecas necesarias.
#include <stdint.h>

// Definición del orden del filtro FIR.
#define N 16

// Declaración de un array externo. Este array se define en otro archivo (probablemente funciones.c) 
// y se utiliza para almacenar las últimas entradas del filtro FIR.
extern volatile int x[N];


// Prototipos de funciones.
long filtrarFIR1(int in);  // Función de filtro FIR.

#endif // FUNCIONES_H

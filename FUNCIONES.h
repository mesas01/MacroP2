/**
  Archivo de encabezado: funciones.h

  Descripci�n:
    Este archivo es un archivo de encabezado que contiene las declaraciones de funciones y estructuras 
    que se utilizar�n en el archivo funciones.c. Define la interfaz p�blica para las funciones y estructuras 
    relacionadas con el filtrado de se�ales.
*/

// Directiva de preprocesador para evitar la inclusi�n m�ltiple del archivo.
#ifndef FUNCIONES_H
#define FUNCIONES_H

// Inclusi�n de bibliotecas necesarias.
#include <stdint.h>

// Definici�n del orden del filtro FIR.
#define N 16

// Declaraci�n de un array externo. Este array se define en otro archivo (probablemente funciones.c) 
// y se utiliza para almacenar las �ltimas entradas del filtro FIR.
extern volatile int x[N];


// Prototipos de funciones.
long filtrarFIR1(int in);  // Funci�n de filtro FIR.

#endif // FUNCIONES_H

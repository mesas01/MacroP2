// Inclusión del archivo de encabezado correspondiente.
#include "FUNCIONES.h"

//----------------------------COEFICIENTES FIR A 50HZ-------------------------------------
#define BL 16
const char B[BL] = {
-2648,  -2512,  -1152,   1424,   4824,   8400,  11376,  13064,  13064,
    11376,   8400,   4824,   1424,  -1152,  -2512,  -2648
};

//----------------------------COEFICIENTES FIR A 25HZ-------------------------------------
//const char B[BL] = {
//      1656,   2444,   3244,   4008,   4692,   5244,   5636,   5840,   5840,
//     5636,   5244,   4692,   4008,   3244,   2444,   1656
//};


// Variables volátiles para pasar datos entre funciones.
volatile int x[BL];  // Array para almacenar las últimas entradas del filtro FIR.
volatile int k=0;    // Índice para gestionar la posición actual en el array x.


//funcion filtro fir
long filtrarFIR1(int in){
    // Función de filtro FIR.
    int i = 1;
    x[k] = (int)in;  // Almacenar la entrada actual en el array x.
    long y = 0;      // Inicializar la salida.

    // Bucle para calcular la salida del filtro FIR.
    for (i = 1; i <= BL; i++) {
        y += (long)B[i - 1] * (long)x[(i + k) % BL]; // Multiplicación y acumulación para calcular la salida.
    }

    k = (k + 1) % BL;  // Actualizar el índice k para la siguiente entrada.
    return y>>8 ;      // Devolver la salida del filtro. El desplazamiento a la derecha es para normalizar el resultado.
}

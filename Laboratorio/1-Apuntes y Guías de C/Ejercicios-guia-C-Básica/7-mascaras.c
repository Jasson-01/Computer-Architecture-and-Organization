#include <stdio.h> //Directiva "#include" tiene a stdio.h para poder usar printf()
#include <stdint.h>

int main() { // main es el punto de entrada
    
    uint32_t palabra1 = 0xE2345678;
    uint32_t palabra2 = 0x00000007;

    uint32_t altos_p1 = (palabra1 >> 29) & 0x07; // se hace una copia de palabra1 y al hacer el shifteo se devuelve un nuevo valor. EL shifteo queda 000...001110 para eso usamos la mascara 0x07 para asegurarnos de que se ponga en cero cualquier cosa que este mas alla de los ultimos 3 bits.

    uint32_t bajos_p2 = palabra2 & 0x07; //El 0x07 el compilador por debajo lo rellena 000...000111 (para que tenga 32 bits). 

    if (altos_p1 == bajos_p2) {
        printf("¡Son iguales! El valor de los 3 bits es: %x (en hex)\n", altos_p1);
    } else {
        printf("No son iguales.\n");
    }
    
    return 0; // Significa que no hay errores
}
#include <stdio.h>

int main(){
    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111, 102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32, 103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105, 111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};
    
    size_t length = sizeof(mensaje_secreto) / sizeof(int); // sizeof(mensaje) te da el espacio total en bytes que ocupa el arreglo en la memoria.
    char decoded[length];

    for (int i=0; i<length; i++){
        decoded[i] = (char) (mensaje_secreto[i]); //casting de int a char
    }

    for (int i=0; i<length; i++){
        printf("%c \n",decoded[i]);
    }
}

//3) ¿Para qué sirve size_t?
// size_t es un tipo de dato especial (declarado internamente como un entero sin signo o unsigned) que está diseñado específicamente para guardar el tamaño de cualquier objeto en la memoria. La función sizeof() siempre devuelve un número de tipo size_t.

//4) ¿Por qué se usa size_t en lugar de un int normal?
// Rpta: 

//  ---> No puede ser negativo: Como size_t es unsigned (sin signo), es imposible tener un tamaño de "-5 bytes", lo cual previene errores fatales en la memoria.

//  ---> Portabilidad: Se adapta mágicamente a la arquitectura del procesador. Si compilas en una PC de 32 bits, size_t medirá 32 bits. Si compilas en una de 64 bits, medirá 64 bits. Si usaras un int clásico para contar el tamaño de un archivo gigante en una PC moderna, ¡el int se desbordaría y tu programa explotaría!
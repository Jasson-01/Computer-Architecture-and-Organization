#include <stdio.h>

int number = 777;

int main(){
    int number = 555;

    printf("El Primer numero es: %d\n", number);
    printf("El Segundo numero es: %d\n", number);
    
    return 0;
}

// ¿Qué sucede?
// los dos numeros tienen el mismo valor(555)

// ¿Por qué?
// Por el scope local, ya que el printf esta dentro de "main" y porque allí se declaró otra variable con el mismo nombre.
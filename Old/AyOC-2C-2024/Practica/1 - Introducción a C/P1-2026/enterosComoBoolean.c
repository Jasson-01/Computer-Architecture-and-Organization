#include <stdio.h>

int main(){
    int i = 10;

    while(i--){
        printf("i=%d\n", i); //En la consola se imprime desde el 9 hasta el 0
    }

    /*
    while(i >= -10){
        printf("i=%d\n", i); //En la consola se imprime desde el 10 hasta el -10.
        i--;
    }
    */    
}

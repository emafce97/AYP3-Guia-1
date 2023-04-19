#include <stdio.h>

// A partir de un listado de números, determinar el mínimo.

int main(){
    int numeros[] = {5,4,3,2,1};
    int min = numeros[0];
    for(int i=1; i<sizeof(numeros)/sizeof(int); i++){
        if(numeros[i]<min){
            min = numeros[i];
        }
    }
    printf("El valor minimo es %d",min);
    return 0;
}
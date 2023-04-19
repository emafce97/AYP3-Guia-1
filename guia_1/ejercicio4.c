#include <stdio.h>

//A partir del ingreso de tres enteros determinar el promedio

int main(){
    int numeros[3];
    int longitud = sizeof(numeros) / sizeof(int);
    for(int i=0;i<longitud;i++){
        printf("Introduzca el valor n°%d: ", i);
        scanf("%d",&numeros[i]);
    }
    int suma=0;
    for(int i=0;i<longitud;i++){
        suma = suma + numeros[i];
    }
    printf("El promedio es %d",suma/longitud);
    return 0;
}
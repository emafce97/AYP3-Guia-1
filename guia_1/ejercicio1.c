#include <stdio.h>

//Programar una rutina que reciba nombre y edad de una persona y las imprima por pantalla.

int main(){
    char nombre[10];
    int edad;
    printf("Introduzca su nombre: ");
    scanf("%s",nombre);
    printf("Introduzca su edad: ");
    scanf("%d",&edad);
    printf("Ud se llama %s y tiene %d años", nombre, edad);
    return 0;
}
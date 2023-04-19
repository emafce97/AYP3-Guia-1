#include <stdio.h>
#include<stdbool.h>

int main(){
    bool termino = false;
    int opcion = 0;
    while(termino == false){
        printf("--Menu de opciones--\n1-Saludar\n2-Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d",&opcion);
        if (opcion == 1){
            printf("Hola!\n");
        }else if (opcion == 2){
            printf("Saliendo...");
            termino = true;
        }
    }

}
#include <stdio.h>

// Pedir un numero y comprar si es par

int main(){
    int numero;
    printf("Ingrese un valor: ");
    scanf("%d",&numero);
    if(numero % 2 == 0){
        printf("Es par");
    }else{
        printf("No es par");
    }
    return 0;
}
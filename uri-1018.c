#include <stdio.h>
 
int main() {
    
    int numero, notas = 0;
    scanf("%d", &numero);
    printf("%d\n", numero);
    if (numero >= 100){
        notas = numero / 100;
        printf("%d nota(s) de R$ 100,00\n", notas);
        numero = numero % 100;
    }
    else{
        printf("0 nota(s) de R$ 100,00\n");
    }
    if (numero >= 50){
        notas = numero / 50;
        printf("%d nota(s) de R$ 50,00\n", notas);
        numero = numero % 50;
    }
    else{
        printf("0 nota(s) de R$ 50,00\n");
    }
    if (numero >= 20){
        notas = numero / 20;
        printf("%d nota(s) de R$ 20,00\n", notas);
        numero = numero % 20;
    }
    else{
        printf("0 nota(s) de R$ 20,00\n");
    }
    if (numero >= 10){
        notas = numero / 10;
        printf("%d nota(s) de R$ 10,00\n", notas);
        numero = numero % 10;
    }
    else{
        printf("0 nota(s) de R$ 10,00\n");
    }
    if (numero >= 5){
        notas = numero / 5;
        printf("%d nota(s) de R$ 5,00\n", notas);
        numero = numero % 5;
    }
    else{
        printf("0 nota(s) de R$ 5,00\n");
    }
    if (numero >= 2){
        notas = numero / 2;
        printf("%d nota(s) de R$ 2,00\n", notas);
        numero = numero % 2;
    }
    else{
        printf("0 nota(s) de R$ 2,00\n");
    }
    if (numero >= 1){
        notas = numero / 1;
        printf("%d nota(s) de R$ 1,00\n", notas);
    }
    else{
        printf("0 nota(s) de R$ 1,00\n");
    }
 
    return 0;
}
#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero); // Corrigido: aspas e vírgula

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if(numero < 50){
        printf("O número é negativo.\n"); // Corrigido: acentuação
    } else{
        printf("O número é zero.\n");
    }
    return 0;
}
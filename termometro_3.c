#include <stdio.h>

int main (){
        int numeros[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 5; i++) {
        soma = soma + numeros[i];
    }

    printf("A soma total eh %d\n", soma);

    return 0;
}
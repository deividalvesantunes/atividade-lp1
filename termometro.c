#include <stdio.h>
int main (){
    int n; 

    printf("Digite um número que contarei de 0 até ele: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        printf("%d" , i);
    }

    return 0;
}
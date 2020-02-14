#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    idade = idade - 1;

    printf("Sua idade menos 1: %d\n", idade);

    return 0;
}

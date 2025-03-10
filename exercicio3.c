#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int ano_nascimento, ano_atual = 2025, idade;
    char aniversario;
    scanf("%d %c", &ano_nascimento, &aniversario);
    idade = ano_atual - ano_nascimento;
    if (idade <= 17) {
        printf("\n%d\nNao pode dirigir\n", idade);
    } else if (idade >= 18) {
        printf("\n%d\nPode dirigir\n", idade);
    }
}

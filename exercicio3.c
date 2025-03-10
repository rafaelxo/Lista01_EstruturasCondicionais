#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int ano_nascimento, ano_atual = 2025, idade;
    char aniversario;
    scanf("%d %c", &ano_nascimento, &aniversario);
    idade = ano_atual - ano_nascimento;
    if (idade <= 17) {
        printf("%d\nNao pode dirigir", idade);
    } else if (idade >= 18) {
        printf("%d\nPode dirigir", idade);
    }
}

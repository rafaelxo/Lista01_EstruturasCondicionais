#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int ano_nascimento, ano_atual, idade;
    char aniversario;
    scanf("%d", &ano_nascimento);
    scanf("%d", &ano_atual);
    scanf(" %c", &aniversario);
    idade = ano_atual - ano_nascimento;
    if (aniversario == 'S') {
        idade = idade;
    } else if (aniversario == 'N') {
        idade = idade - 1;
    }
    if (idade <= 17) {
        printf("%d\nNao pode dirigir", idade);
    } else if (idade >= 18) {
        printf("%d\nPode dirigir", idade);
    }
}

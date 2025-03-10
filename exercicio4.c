#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int idade;
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7) {
        printf("\nInfantil\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("\nJuvenil\n");
    } else if (idade >= 11 && idade <= 15) {
        printf("\nAdolescente\n");
    } else if (idade >= 16 && idade <= 30) {
        printf("\nAdulto\n");
    } else if (idade > 30) {
        printf("\nSenior\n");
    }
}

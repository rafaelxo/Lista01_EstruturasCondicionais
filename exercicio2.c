#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n1, n2, n3, n4, media;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4)/4.0;
    if (media >= 7) {
        printf("\n%.2f\nAprovado\n", media);
    } else {
        printf("\n%.2f\nReprovado\n", media);
    }
}

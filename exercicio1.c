#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) {
        printf("\n%d\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("\n%d\n", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("\n%d\n", n3);
    }
}

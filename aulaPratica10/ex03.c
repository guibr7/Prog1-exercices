// Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <stdio_ext.h>
struct Racional {
    int numerador;
    int denominador;
};
int calcularMDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
int main() {
    struct Racional r1, r2;
    int mdc1, mdc2;

    printf("Digite numerador e denominador de r1: ");
    __fpurge(stdin);
    scanf("%d %d", &r1.numerador, &r1.denominador);
    printf("Digite numerador e denominador de r2: ");
    __fpurge(stdin);
    scanf("%d %d", &r2.numerador, &r2.denominador);

    mdc1 = calcularMDC(r1.numerador, r1.denominador);
    r1.numerador = r1.numerador / mdc1;
    r1.denominador = r1.denominador / mdc1;

    mdc2 = calcularMDC(r2.numerador, r2.denominador);
    r2.numerador = r2.numerador / mdc2;
    r2.denominador = r2.denominador / mdc2;

    if (r1.numerador == r2.numerador && r1.denominador == r2.denominador) {
        printf("r1 e r2 são iguais a (%d/%d)!\n", r1.numerador, r1.denominador);
    } else {
        printf("r1 e r2 são diferentes!\n");
    }

    return 0;
}

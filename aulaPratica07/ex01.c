//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include<stdio_ext.h>
#define MAX 10

int main() {
    char palavra[MAX] = {0};
    char vogais[MAX] = {0};
    char consoante[MAX] = {0};
    int numVog = 0;
    int numCon = 0;

    for (int x = 0; x < MAX; x++) {
        printf("Digite o %d caractere: ", x + 1);
        __fpurge(stdin);
        scanf(" %c", &palavra[x]);  // O espaço antes de %c evita pegar '\n' indesejados
    }

    for (int x = 0; x < MAX; x++) {
        if (palavra[x] == 'a' || palavra[x] == 'e' || palavra[x] == 'i' || palavra[x] == 'o' || palavra[x] == 'u' ||
            palavra[x] == 'A' || palavra[x] == 'E' || palavra[x] == 'I' || palavra[x] == 'O' || palavra[x] == 'U') {
            vogais[numVog++] = palavra[x];
        } else if ((palavra[x] >= 'b' && palavra[x] <= 'z') || (palavra[x] >= 'B' && palavra[x] <= 'Z')) {
            consoante[numCon++] = palavra[x];
        }
    }


    printf("\n%d vogais: ", numVog);
    for (int a = 0; a < numVog; a++) {
        printf(" %c", vogais[a]);
    }

    printf("\n%d consoantes: ", numCon);
    for (int a = 0; a < numCon; a++) {
        printf(" %c", consoante[a]);
    }
    printf("\n");

    return 0;
}

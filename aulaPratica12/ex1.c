#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    int contPar = 0, contImp = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int *vet1 = malloc(n * sizeof(int));
    printf("Digite os valores do vetor: ");
    for (int c = 0; c < n; c++)
    {
        scanf("%d", &vet1[c]);
        if (vet1[c] % 2 == 0)
        {
            contPar += 1;
        }
        else
        {
            contImp += 1;
        }
    };
    int *vet_par = malloc(contPar * sizeof(int));
    int *vet_impar = malloc(contImp * sizeof(int));
    int x = 0, y = 0;
    for (int c = 0; c < n; c++)
    {
        if (vet1[c] % 2 == 0)
        {
            vet_par[x] = vet1[c];
            x++;
        }
        else
        {
            vet_impar[y] = vet1[c];
            y++;
        }
    };
    printf("Vetor com os valores pares: ");
    if (contPar != 0)
    {
        printf("[");
        for (int l = 0; l < contPar; l++)
        {
            printf(" %d", vet_par[l]);
        }
        printf(" ]\n");
    }
    else
    {
        printf("Vazio\n");
    }
    printf("Vetor com os valores ímpares: ");
    if (contImp != 0)
    {
        printf("[");
        for (int c = 0; c < contImp; c++)
        {
            printf(" %d", vet_impar[c]);
        }
        printf(" ]\n");
    }
    else
    {
        printf("Vazio\n");
    };
    free(vet1);
    free(vet_par);
    free(vet_impar);
    return 0;
}
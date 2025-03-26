// Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <stdlib.h>
int **criaMatriz(int m, int n)
{
    int **matriz = (int **)malloc(m * sizeof(int *));
    if (matriz == NULL)
        return NULL;

    for (int i = 0; i < m; i++)
    {
        matriz[i] = (int *)malloc(n * sizeof(int));
        if (matriz[i] == NULL)
            return NULL;
    }
    return matriz;
}

int procura_valor(int **A, int m, int n, int valor)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] == valor)
            {
                return 1;
            }
        }
    }
    return 0;
}

void liberaMatriz(int **A, int m)
{
    for (int i = 0; i < m; i++)
    {
        free(A[i]);
    }
    free(A);
}

int main()
{
    int m, n, valor;
    printf("Digite o valor de m e n: ");
    scanf("%d %d", &m, &n);
    int **matriz = criaMatriz(m, n);
    if (matriz == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Digite a matriz:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);
    if (procura_valor(matriz, m, n, valor))
    {
        printf("Valor encontrado!\n");
    }
    else
    {
        printf("Valor não encontrado!\n");
    }

    liberaMatriz(matriz, m);
    return 0;
}

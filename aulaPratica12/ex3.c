// Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <stdlib.h>

double **transposta(double **A, int m, int n);
double **criaMatriz(int m, int n);
void liberaMatriz(double **A, int m);

int main()
{
    int m, n;

    printf("Digite o valor de m e n: ");
    scanf("%d %d", &m, &n);

    double **A = criaMatriz(m, n);
    if (A == NULL)
    {
        printf("Erro ao alocar memória para a matriz original.\n");
        return 1;
    }
    printf("Digite a matriz:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }
    double **T = transposta(A, m, n);
    if (T == NULL)
    {
        liberaMatriz(A, m);
        return 1;
    }
    printf("Transposta:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.0lf ", T[i][j]);
        }
        printf("\n");
    }
    liberaMatriz(A, m);
    liberaMatriz(T, n);

    return 0;
}
double **transposta(double **A, int m, int n)
{
    double **T = criaMatriz(n, m);

    if (T == NULL)
    {
        printf("Erro ao alocar memória para a matriz transposta.\n");
        return NULL;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            T[j][i] = A[i][j];
        }
    }
    return T;
}

double **criaMatriz(int m, int n)
{
    double **matriz = (double **)malloc(m * sizeof(double *));
    if (matriz == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < m; i++)
    {
        matriz[i] = (double *)malloc(n * sizeof(double));
        if (matriz[i] == NULL)
        {
            for (int j = 0; j < i; j++)
            {
                free(matriz[j]);
            }
            free(matriz);
            return NULL;
        }
    }

    return matriz;
}
void liberaMatriz(double **A, int m)
{
    for (int i = 0; i < m; i++)
    {
        free(A[i]);
    }

    free(A);
}

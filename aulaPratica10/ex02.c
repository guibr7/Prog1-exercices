//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#define MAX 4

typedef struct{
char nome[15];
float potencia;
int temp;
}Eletros;

int main(){
    Eletros eletro[MAX]; int dias = 0; float soma = 0;
    for(int c = 0; c < MAX ;  c++){
        printf("Eletrodoméstico %d\n",c);
        printf("Nome: ");
        __fpurge(stdin);
        scanf("%s",eletro[c].nome);
        printf("Consumo (kW/h): ");
        __fpurge(stdin);
        scanf("%f",&eletro[c].potencia);
        printf("Tempo ativo em horas: ");
        __fpurge(stdin);
        scanf("%d",&eletro[c].temp);
        printf("\n");
        //soma
        soma += (eletro[c].potencia*eletro[c].temp);
    }
    printf("Número de dias para cálculo: ");
    scanf("%d",&dias);
    float consumoTotal = soma*dias;
    printf("\nConsumo total: %.1f kW\n",consumoTotal);
    printf("Porcentagens:");
    printf("\n");
    for(int c = 0; c < MAX; c++){
        printf("%s",eletro[c].nome);
        int teste = eletro[c].potencia*eletro[c].temp;
        printf("%.2f%%\n",((teste/consumoTotal)*100.0)*10);
    }
    
    return 0;
}
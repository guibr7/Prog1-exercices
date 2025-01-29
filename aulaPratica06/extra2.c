//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
int main(){
    int c = 1;
    float consumo,media,menor,maior,soma;
    menor = 0;
    maior = 0;
    soma = 0;
    while(c <= 5){
        printf("Digite o consumo da %d residência: ",c);
        scanf("%f",&consumo);
        if(menor == 0){
            menor = consumo;
        }
        soma+=consumo;
        if(consumo >= maior){
            maior = consumo;
        }else if(consumo <= menor){
            menor = consumo;
        };
        c++;
    }
    media = soma/5;
    printf("Consumo médio: %.2f Kvh\n",media);
    printf("Maior consumo: %.2f Kvh\n",maior);
    printf("Menor consumo: %.2f Kvh\n",menor);
    return 0;
}
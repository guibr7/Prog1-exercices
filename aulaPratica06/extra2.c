//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
int main(){
    int c = 1;
    float consumo,media,menor,maior,soma;
    menor = 0;
    maior = 0;
    soma = 0;
    while(c <= 15){
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
    media = soma/15;
    printf("Consumo médio: %.2f Kwh\n",media);
    printf("Maior consumo: %.2f Kwm\n",maior);
    printf("Menor consumo: %.2f Kwm\n",menor);
    return 0;
}
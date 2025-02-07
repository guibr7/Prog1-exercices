//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#define max 30
float calcularMedia(float *vetor);
float calcularMedia(float *vetor){
    float med;
    for(int c = 0; c < max ; ++c){
        med+=*(vetor+c);
    }
    return (med/max);
}
int main(){
    printf("Entre com as temperaturas: ");
    float temperatura[max]; float media;
    for(int c = 0; c < max ; ++c){
        scanf("%f",&temperatura[c]);
    }
    media = calcularMedia(temperatura);

    int acima = 0; int abaixo = 0;

    for(int c = 0; c < max ; ++c){
        if(temperatura[c] > media){
            acima++;
        }else{
            abaixo++;
        }
    }
    printf("Acima: %d\n",acima);
    printf("Abaixo: %d\n",abaixo);
    return 0;
}
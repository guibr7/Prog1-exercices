//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include<stdlib.h>
#define MAX  100
int main(){
    srand(10);
    int vetor[MAX]; int num = 0;
    for(int i = 0; i < MAX; i++){
        int aleatorio = rand()%200;
        vetor[i] = aleatorio;
    }

    printf("Digite um número: ");
    scanf("%d",&num);
    printf("Maiores:");

    for( int i = 0; i < MAX; i++){
        if(vetor[i] > num){
            printf(" %d",vetor[i]);
        }
        //printf(" %d",vetor[i]);
    }

    printf("\nMenores:");

    for( int i = 0; i < MAX; i++){
        if(vetor[i] < num){
            printf(" %d",vetor[i]);
        }
        //printf(" %d",vetor[i]);
    }
    return 0;
}
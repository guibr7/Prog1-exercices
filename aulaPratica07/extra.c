#include <stdio.h>
void rotacionar(int *vetor, int num);
void rotacionar(int *vetor, int num){
    int primeiros[num];
    int ultimos[num];
    for(int i = 0; i < num; i++){
        primeiros[i] = vetor[i];
    }

    int cont = 0;
    while(cont <3){ 
        for(int i = (15-1); i >= (15-num); i--){
            ultimos[cont] = vetor[i];
        }
    cont++;
    }

    for(int i = 0; i < 3; i++){
        vetor[i] = ultimos[i];
    }

    for(int i = (15-num); i < 15; i++){
           vetor[i] = primeiros[i];
        }
}

int main() {
    int vetor[15];
    int num;

    printf("Entre com os 6 valores: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Entre com o valor de n:\n");
    scanf("%d", &num);

    rotacionar(vetor,num);

    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

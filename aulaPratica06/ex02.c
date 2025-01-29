//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
int main(){
    float n1,resultado;
    float soma = 0;
    int cont = 1;
    for(int i = 0; cont == 1; i++ ){
        printf("Digite um valor: ");
        scanf("%f",&n1);
        if(n1 == 0 && i == 0){
            cont = 0;
            printf("Não foi possível calcular MA!\n");
        }
        if(n1 != 0){
            soma+=n1;
        }
        if(n1 == 0 && i != 0){
            resultado  = (1.0/i)*soma;
            printf("MA = %.2f\n",resultado);
            break;
        }
    }
 return 0;
}
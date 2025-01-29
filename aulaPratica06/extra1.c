//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
int primo(int n);
int primo(int n){
    int cont,NumDiv;
    cont = 1;
    NumDiv = 0;
    while(cont <= n){
        if(n == 1){
            return 1;
        }
        if(n%cont == 0){
            NumDiv++;
        }
        cont++;
    }
    if(NumDiv == 2){
        return 1;
    }else{ return 0;}
};
int main(){
    int num,resul;
    printf("Digite um número:");
    scanf("%d",&num);
    resul = primo(num);
    if(resul == 1){
        printf("%d é um número primo!\n",num);
    }else{ 
        printf("%d não é um número primo!\n",num);
    }
    return 0;
}
#include <stdio.h>
int primo(int n);
int primo(int n){
  
};
int main(){
int num,resultado;
printf("Digite um número:");
scanf("%d",&num);
resultado = primo(num);
if(resultado == 0){
    printf("%d não é um número primo!",num);
}else{
    printf("%d é um número primo!",num);
}
return 0;
}
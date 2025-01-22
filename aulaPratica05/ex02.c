//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
int quadrado_por_soma(int n);
int quadrado_por_soma(int n){
   int contadorImpar,i,resultado;
   i = 1;
   resultado = 0;
   contadorImpar = 1;
   while(contadorImpar <= n){
    if(i%2 != 0){
        contadorImpar++;
        resultado += i;
    }
    i++;
   }
   return resultado;
}
int main(){
    int n,quadrado;
    printf("Digite um número: ");
    scanf("%d",&n);
    quadrado = quadrado_por_soma(n);
    printf("O quadrado de %d é %d\n",n,quadrado);
    return 0;
}

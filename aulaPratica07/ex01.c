#include <stdio.h>
long long fat(int n);
long long fat(int n){
    if(n == 1){
        return 1;
    }
    return n*fat(n-1);
}
int main(){
    long long fatorial;
    int n;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    fatorial = fat(n);
    printf("%d ! = %lld",n,fatorial);
    return 0;
}
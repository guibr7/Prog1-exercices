//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
void divisores(int n);
void divisores(int n){
    int i = 1;
    int r;
    printf("Os divisores de %d são: ",n);
    while(i <= n){
        r = n%i;
        if(r == 0){
            printf("%d ",i);
        };
        i++;
    };
}
int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    printf("\n");
    divisores(n);
    return 0;
}
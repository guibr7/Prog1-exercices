#include <stdio.h>
int main(){ 
    int x,y;
    x = 0;
    y = 0;
    printf("Digite os valores para x e y:");
    scanf("%d %d",&x,&y);
     if(x > y){
        printf("x deve ser menor do que y.\n");
    }
    if((x%2 != 0) && (y%2 != 0)){
        printf("Apenas números pares são aceitos.\n");
    }
    if((x<=0) && (y<=0)){
        printf("Apenas números positivos são aceitos.\n");
    }

return 0;
}

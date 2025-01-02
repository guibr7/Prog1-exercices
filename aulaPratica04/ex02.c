//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
void ordena3valores(int a, int b, int c, int *menor, int *meio, int *maior);
void ordena3valores(int a, int b, int c, int *menor, int *meio, int *maior){
if(a < b && a < c){
    *menor = a;
    if(b < c){
        *meio = b;
        *maior = c;
    } else {
        *meio = c;
        *maior = b;
    }
}if(b < a && b < c){
    *menor = b;
    if(a < c){
        *meio = a;
        *maior = c;
    } else {
        *meio = c;
        *maior = a;
    }
}if(c < a && c < b){
    *menor = c;
    if(a < b){
        *meio = a;
        *maior = b;
    } else {
        *meio = b;
        *maior = a;
    }
}
}
int main(){
int a,b,c,menor,meio,maior,*Pmenor,*Pmeio,*Pmaior;
Pmenor = &menor;
Pmeio = &meio;
Pmaior = &maior;
printf("Digite três valores:");
scanf("%d%d%d",&a,&b,&c);
ordena3valores(a,b,c,Pmenor,Pmeio,Pmaior);
printf("\n");
printf("Os valores ordenados são: %d %d %d\n",*Pmenor,*Pmeio,*Pmaior);
return 0;
}
//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
int main(){
    float nota1,nota2,media;
        printf("Digite as notas do aluno: ");
        scanf("%f %f",&nota1,&nota2);
        while(nota1 >= 0 && nota2 >= 0){
             media = (nota1 + nota2)/2.0;
             printf("A média das notas é %.1f\n",media);
             printf("Digite as notas do aluno: ");
             scanf("%f %f",&nota1,&nota2);
            }; 
return 0;
}
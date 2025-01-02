#include <stdio.h>
void calcularIMC(float peso, float altura);
void calcularIMC(float peso, float altura){
float imc = peso/(altura*altura);
if(imc >= 30){
    printf("Obeso");
}else if(imc >= 25 && imc<30){
    printf("Acima do peso");
}else if(imc < 25 && imc >= 18.5){
    printf("Peso normal");
}else{
    printf("Abaixo do peso");
}
};
int main(){
    float peso,altura;
    printf("Entre com o peso: ");
    scanf("%f",&peso); printf("\n");
    printf("Entre com a altura: ");
    scanf("%f",&altura);
    calcularIMC(peso,altura);
    return 0;
}
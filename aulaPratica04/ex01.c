//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <math.h>
float calculaArea(float lado);
float calculaArea(float lado){
float Area;
Area = 3*(pow(lado,2))*sqrt(25+10*sqrt(5));
return Area;
}

int main(){
float lado,area;
printf("Digite o lado do dodecaedro regular:");
scanf("%f",&lado);
area = calculaArea(lado);
printf("\n");
printf("A area e: %.2f",area);
return 0;
}

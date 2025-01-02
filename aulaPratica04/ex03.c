//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
void converteLiquidos(float litros, float *oz, float *gallons);
void converteLiquidos(float litros, float *oz, float *gallons){
*oz = litros*33.814;
*gallons = litros*0.264172;
}
int main(){
float litros,oz,gallons,*Poz,*Pgal;
Poz = &oz;
Pgal = &gallons;
printf("Digite o total em litros:");
scanf("%f",&litros);
converteLiquidos(litros,Poz,Pgal);
printf("\n");
printf("Total em oz: %.2f\n",*Poz);
printf("Total em gallons: %.2f\n",*Pgal);
return 0;
}
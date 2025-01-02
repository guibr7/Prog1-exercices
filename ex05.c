#include <stdio.h>
void converterDistancias(float metros, float *jardas, float *pes, float *polegadas);
void converterDistancias(float metros, float *jardas, float *pes, float *polegadas){
    *jardas = metros*1.094;
    *pes = metros*3.281;
    *polegadas = metros*39.3701;
}
int main(){
float metros,jardas,pes,polegadas;
float *j,*pe,*pol;
j = &jardas;
pe = &pes;
pol = &polegadas;
printf("Digite o valor em Metros: ");
scanf("%f",&metros);
printf("\n\n");
converterDistancias(metros,j,pe,pol);
printf("Jardas: %.3f\n\n",jardas);
printf("Pés: %.3f\n\n",pes);
printf("Polegadas: %p \n",polegadas);
return 0;
}
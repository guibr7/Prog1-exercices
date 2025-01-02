#include <stdio.h>
    void converteHora(long totalSegundos, int *hora, int *min, int *seg);
    void converteHora(long totalSegundos, int *hora, int *min, int *seg){
        *hora = (totalSegundos/60)/60;
        *min = (totalSegundos/60)-(60*(*hora));
        *seg = totalSegundos - ((((*hora)*60)*60)+((*min)*60));
    };
int main(){
    long totalSegundos;
    int hora,min,seg,*Phora,*Pmin,*Pseg;
    Phora = &hora;
    Pmin = &min;
    Pseg = &seg;
    printf("Digite o total de segundos: ");
    scanf("%ld",&totalSegundos);
    converteHora(totalSegundos,Phora,Pmin,Pseg);
    printf("Hora convertida: %02d:%02d:%02d\n",*Phora,*Pmin,*Pseg);
    return 0;
}
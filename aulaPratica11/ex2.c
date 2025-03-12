//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <math.h>

typedef struct{
    char idf;
	float Cx;
	float Cy;
}Ponto;
float dist2Pontos(Ponto a, Ponto b);

int main(){
    Ponto VetPont[3];
    char fileName[50];
    int n;
    printf("Digite o nome do arquivo: ");
    scanf("%s",fileName);
    FILE *arquivo = fopen(fileName,"r");
    fscanf(arquivo, "%d", &n);//Dúvida
    for(int c = 0; c < 3;c++){
        fscanf(arquivo, " %c %f %f",&VetPont[c].idf,&VetPont[c].Cx,&VetPont[c].Cy);
    };

   for(int c = 1; c < 3; c++){
    float resul = dist2Pontos(VetPont[0],VetPont[c]);
    printf("Distância entre %c e %c: %.2f\n",VetPont[0].idf,VetPont[c].idf,resul);
   }
    fclose(arquivo);
    return 0;
}

float dist2Pontos(Ponto a, Ponto b){
    double expo = 2;
    double t1 = (b.Cx)-(a.Cx);
    double t2 = (b.Cy) - (a.Cy);
    float soma = sqrt(pow(t1,expo)+pow(t2,expo));
    return soma;
}
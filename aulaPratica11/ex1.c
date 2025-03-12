//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <stdio_ext.h>
typedef struct{
	char idf;
	float Cx;
	float Cy;
}Pontos;
int main(){
	int numPt = 0;
	char fileName[100];
	Pontos pontos[100];
	//printf("Digite o número de pontos:");
	scanf("%d",&numPt);
	for(int c = 0; c < numPt ; c++){
		/*printf("Ponto %d:\n",c+1);
		printf("Digite o identificador, a coord. x e coord. y: ");*/
		__fpurge(stdin);
		scanf("%c%f%f",&pontos[c].idf,&pontos[c].Cx,&pontos[c].Cy);
		__fpurge(stdin);
	};
	//printf("Digite o nome do arquivo para salvamento: ");
	scanf("%s",fileName);
	FILE *arquivo = fopen(fileName,"w+");
	
	
	fprintf(arquivo,"%d\n",numPt);
	for(int c = 0; c < numPt; c++){
		fprintf(arquivo,"%c",pontos[c].idf);
		fprintf(arquivo," %.1f",pontos[c].Cx);
		fprintf(arquivo," %.1f",pontos[c].Cy);
		fprintf(arquivo,"\n");
	};
	
	fclose(arquivo);
	return 0;

}

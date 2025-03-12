//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#define MAX 5
typedef struct{
	char modelo[25];
	float consumo;
}Carro;

void economico(Carro carros[], int n);
void listar(Carro carros[],int n);

int main(){
	Carro carros[MAX];
	for(int c =0; c < MAX ; c++){
		printf("Carro %d\n",c);
		__fpurge(stdin);
		printf("Modelo: ");
		__fpurge(stdin);
		scanf("%s",carros[c].modelo);
		printf("Consumo(km/l): ");
		__fpurge(stdin);
		scanf("%f",&carros[c].consumo);
		printf("\n");
	}
	economico(carros,MAX);
	printf("Consumo em 1000 km\n");
	listar(carros,MAX);
	return 0;
}

void economico(Carro carros[], int n){
	int x = carros[0].consumo;
	char modeloEc[25];
	strcpy(modeloEc, carros[0].modelo);
	
	for(int c = 1; c < n ;  c++){
		if(carros[c].consumo > x){
			x = carros[c].consumo;
			strcpy(modeloEc, carros[c].modelo);
		} 
	};
	printf("Mais econômico: %s\n",modeloEc);
};

void listar(Carro carros[],int n){
	for(int c = 0; c < n ;  c++){
		float cons = 1000.0/carros[c].consumo;
		printf("%s %.2f\n",carros[c].modelo,cons);
	};
}

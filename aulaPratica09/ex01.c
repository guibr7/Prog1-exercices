#include <stdio.h>
void imprimir(int matriz[4][4], int n,int m);
void pares(int matriz[4][4], int n,int m);


void imprimir(int matriz[4][4], int n,int m){
	for(int c = 0; c < n ; c++){
		for(int l = 0; l < m; l++){
			printf("%d ",matriz[c][l]);
		}
		printf("\n");
	}
}

void pares(int matriz[4][4], int n,int m){
	printf("Posições de valores pares:\n");
	for(int c = 0; c < n ; c++){
		for(int l = 0; l < m; l++){
			if(matriz[c][l]%2 == 0){
				printf("%d %d\n",c,l);
			}
		}
		
	}
}


int main(){
	int matriz[4][4];
	printf("Digite os valores da matriz: ");
	for(int c = 0; c < 4 ; c++){
		for(int l = 0; l < 4; l++){
			do{
				scanf("%d",&matriz[c][l]);
			}while(matriz[c][l] < 0);	
		}
	}
	imprimir(matriz,4,4);
	pares(matriz,4,4);
	return 0;
}
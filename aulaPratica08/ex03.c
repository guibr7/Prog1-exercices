//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio.h>

int main() {
    int matriz[3][3];
    int maior, menor;
    printf("Digite os elementos da matriz: \n");
    for(int i=0;i<3;i++)
    	for(int j=0;j<3;j++)
    	scanf("%d", &matriz[i][j]);
    maior=menor=matriz[0][0];
	for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
			if(matriz[i][j]>maior){
				maior=matriz[i][j];}
			if(matriz[i][j]<menor)
				menor = matriz[i][j];	
 	   }
	}
	printf("Maior elemento: %d\n", maior);
		printf("menor elemento: %d\n", menor);
		return 0;
	}
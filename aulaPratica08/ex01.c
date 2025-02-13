//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio_ext.h>
#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
	char frase[MAX]; char L1; char L2;
	printf("Digite a frase: ");
	__fpurge(stdin);
	fgets(frase,MAX,stdin);

	printf("Digite L1: "); 
	__fpurge(stdin);
	scanf("%c",&L1);
	
	printf("Digite L2: "); 
	__fpurge(stdin);
	scanf("%c",&L2);
	
	for(int c = 0; c < MAX ; c++){
		if(frase[c] == L1 ){
			frase[c] = L2;
		};
	}
		printf("%s\n",frase);
	return 0;
}

//Guilherme Henrique Silva Miranda 24.2.4090
#include <stdio_ext.h>
#include <stdio.h>
#include <string.h>
#define MAX 65
int main(){
	char NomeCompleto[MAX];
	char sobrenome[MAX];
	printf("Digite o nome completo: ");
	__fpurge(stdin);

    fgets(NomeCompleto,MAX,stdin);
	int tamanhoT = (strlen(NomeCompleto));
    
    if (tamanhoT > 0 && NomeCompleto[tamanhoT-1] == '\n') {
        NomeCompleto[tamanhoT-1] = '\0';
    }

    int ind = 0;
     for(int cont = tamanhoT; cont > 0 ; cont--){
        if(NomeCompleto[cont] == ' '){
            ind = cont;
            NomeCompleto[cont] = '\0';
            break;
        }
    }

    int x = 0;
    for(int c = ind+1; c <= tamanhoT; c++){
        if(c == tamanhoT){
            sobrenome[x] = '\0';
        }
        sobrenome[x] = NomeCompleto[c];
        x++;
    }

    int totalSobrenome = strlen(sobrenome);

    printf("%s, %s\n",sobrenome,NomeCompleto);
    printf("Total de letras: %d\n",tamanhoT-3);
    printf("Total de letras do último sobrenome: %d\n",totalSobrenome);

	return 0;
}
#include <stdio_ext.h>
#include <stdio.h>
#include <string.h>
int main(){
    char palavra[] = "Joao\n";
    int tamanho = strlen(palavra);
    printf("%s\n",palavra);
    printf("%d ",tamanho);
    return 0;
}
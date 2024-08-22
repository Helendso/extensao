// questão do projeto de extensão

#include <stdio.h>
#include <string.h>


void q01(){
    char str[50];
    printf("Digite uma palavra");
    scanf( " %50[^\n]", str);
    
    int tamanho = strlen(str);
   
    printf("O tamanho da string é: %d\n", tamanho);
   
}
int main () {
    q01();
    return 0;
}

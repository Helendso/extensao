// questão do projeto de extensão

#include <stdio.h> 
#include <string.h> 


void q01(){
  
    char str[50], str1[50], copia[50], concatenar[50];
    
    printf("Digite uma palavra\n");
    scanf( " %50[^\n]", str);
 
    printf("Digite uma palavra\n");
    scanf( " %50[^\n]", str1);
    
    int tamanho = strlen(str);
    copia[50] = strcpy(copia, str);
    concatenar[50] = strcat(str,str1);
    int comparacao = strcmp(str,str1);
  
    if (comparacao == 0) {
       printf("O tamanho da string é: %d\n A String copiada é: %s\n A String Concatenada é: %s\n As Strings comparadas são iguais\n", tamanho, copia, concatenar);
    }
    else if (comparacao>0){
        printf("O tamanho da string é: %d\n A String copiada é: %s\n A String Concatenada é: %s\n A primeira string é maior que a segunda\n", tamanho, copia, concatenar);
    }
    else {
        printf("O tamanho da string é: %d\n A String copiada é: %s\n A String Concatenada é: %s\n A primeira string é menor que a segunda\n", tamanho, copia, concatenar);
  
    }
}
int main () {
    q01();
    return 0;
}

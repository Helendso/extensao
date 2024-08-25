// questão do projeto de extensão

#include <stdio.h> 
#include <string.h> 


int main(){
  
    char str[50], str1[50], copia[50];
    
    printf("Digite uma palavra\n");
    scanf( " %50[^\n]", str);
 
    printf("Digite uma palavra\n");
    scanf( " %50[^\n]", str1);
    
   
    int tamanho = strlen(str);
    strcpy(copia, str1);
    strcat(str,str1);
    int cmp=strcmp(str,str1);
   
    if (cmp==0) {
       printf("O tamanho da string é: %d\n A String copiada é: %s\n A String Concatenada é: %s\n As Strings comparadas são iguais\n", tamanho, copia, str);
    }
    else if (cmp>0){
        printf("O tamanho da string é: %d\n A String copiada é: %s\n A String Concatenada é: %s\n A primeira string é maior que a segunda\n", tamanho, copia, str);
    }
    else {
        printf("O tamanho da string é: %d\n A String copiada é: %s\n A String Concatenada é: %s\n A primeira string é menor que a segunda\n", tamanho, copia, str);
  
    }
}

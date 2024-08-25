#include <stdio.h>
#include <string.h>

int main (){

//strcmp

char str[50], str1[50], copia[50];

printf("Digite a primeira palavra:\n");
scanf(" %50[^\n]", str);

printf("Digite a segunda palavra:\n");
scanf(" %50[^\n]", str1);

int comparar = strcmp(str,str1);
strcpy(copia,str);
strcat(str,str1);
int tamanho = strlen(str1);

if(comparar==0){
    printf("As palavras são iguais\n A palavra copiada é: %s\n A palavra concatenada é: %s\n O tamanho da segunda palavra é: %d\n", copia, str, tamanho);
}

else {
    printf("As palavras não são iguais\n A palavra copiada é: %s\n A palavra concatenada é: %s\n O tamanho da segunda palavra é: %d\n", copia, str, tamanho);
}


}
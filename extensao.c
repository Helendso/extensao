// questão do projeto de extensão

#include <stdio.h> 
#include <string.h> 


void q01(){
    //declarando uma variável do tipo string com tamanho de 50 caracteres.
    char str[50]; 
    
    //imprimindo texto para o operador executar a função.
    printf("Digite uma palavra\n");

    //direcionando onde será salvo o comando executado pelo operador.
    scanf( " %50[^\n]", str);

    //strlen identifica o tamanho da string digitada, aqui estamos declarando uma variável 
    //e salvando o o tamanho da string nessa variável.
    int tamanho = strlen(str);
    
   // imprimindo o valor do tamanho da string que foi digitada pelo operador.
    printf("O tamanho da string é: %d\n", tamanho);
   
}
int main () {
    q01();
    return 0;
}

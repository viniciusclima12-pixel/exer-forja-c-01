#include <stdio.h>
#include <stdlib.h>

int main() {
  

    //declarar uma string com tamanho maximo de 50 caracters
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    //le o nome ate 49 caracteres, incluindo espaços
    fgets(nome, 50, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Ola %sVoce tem %d anos. \n", nome, idade);

 



  system("pause");
  return 0;
}
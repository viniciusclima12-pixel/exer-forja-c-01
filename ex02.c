#include <stdio.h>
#include <stdlib.h>

int main() {
   char cidade[50], estado[50];
   int idade, anos;
    printf("Digite o estado onde voce nasceu: ");
    fgets(estado, 50, stdin);
    printf("Digite a cidade onde voce nasceu: ");
    fgets(cidade, 50, stdin);
    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &anos);
    idade = 2025 - anos;
    printf("Voce naseu em %d no estado do %s em %s e tem %d anos \n", anos, estado, cidade, idade);
    
   
   


  
   system("pause");
   return 0;
}

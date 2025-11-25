//inclui blioteca stdio.h permite  o uso de entrade e saida de valores  como print

#include<stdio.h>
//inclui a bibliote stdlib.h para funcoes utilitareias como system
#include<stdlib.h>

// inicio da funcao, onde o programa comeca a ser executado
int main(){

    float num1 = 100.45;
    int num2 = 200;

    //printar  os numero da variaveis
    printf("%f %d", num1, num2);



    //pausa o programa, ate q o usuario pressione qualquer tecla
    system("pause");
    // finaliza o programa e retorna 0, indicando que tudo certo
   return 0;
}
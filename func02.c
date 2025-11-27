#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int quad(int x);



int main (){
    setlocale(LC_ALL, "Portuguese");

    int num,res;

    printf("Digite um numero: ");
    scanf(" %d", &num);

    res = quad(num);
    printf("O QUADRADO DE %d E: %d", num,res);

    
    system("pause");
    return 0;
}

 int quad(int x){
   int quadrado;

    quadrado = x * x;
    return quadrado;
 }
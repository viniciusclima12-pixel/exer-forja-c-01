#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");


    int idade;

    printf("INFORME SUA IDADE: ");
    scanf(" %d", &idade);

    if(idade >= 15 && idade <= 18){
       printf("a idadde esta entre 15 e 18 anos");





    }else{
         printf("nao esta entre 15 e 18 anos");
       
    }





    
    system("pause");
    return 0;
}
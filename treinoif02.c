#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");

     int age1, age2;

    printf("Informe a primeira idade: ");
    fflush(stdin);
    scanf("%d", &age1);
    printf("Informe a segunda idade: ");
    fflush(stdin);
    scanf("%d", &age2);

    printf("\n");

    if(age1 > age2){
       printf("A MAIOR IDADE É: %d", age1);

    }else if (age2 > age1){
        printf("AS IDADES SÃO IGUAIS. \n");
    
    
    }else{
        printf("A MAIOR IDADE É: %d", age2);
    }




    system("pause");
    return 0;
}
    

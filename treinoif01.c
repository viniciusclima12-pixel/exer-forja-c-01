#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    


    float sal;

    printf("Qual o seu salário? ");
    fflush(stdin);
    scanf("%f", &sal);

    if(sal > 5000){
        printf("SEU SALÁRIO É MAIOR QUE R$5.000,00");

    } else {
        printf("SEU SALÁRIO É MENOR QUE R$5.000,00");



    }
    system("pause");
    return 0;
}
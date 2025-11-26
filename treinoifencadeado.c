#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;

    printf("Qual a idade? ");
    fflush(stdin);
    scanf("%d", &idade);
    printf("DIGITE (M) PARA MASCULINO E (F) PARA FEMININO: ");
    scanf("%c", &sexo);

    if (sexo == 'M'){

     if (idade >= 16){
            printf("PODE COMPRAR INGRESSOS. \n");
    }else{
            printf("NÃO PODE COMPRAR INGRESSOS. \n");
        }
    }else{
    if (idade >= 18){
            printf("PODE COMPRAR INGRESSOS. \n");
    }else{
            printf("NÃO PODE COMPRAR INGRESSOS. \n");
        }
    }

    system("pause");
    return 0;
}
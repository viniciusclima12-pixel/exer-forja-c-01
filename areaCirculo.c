#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

const float PI = 3.1415f;

int main (){
    setlocale(LC_ALL, "Portuguese");

    float raio;

    fflush(stdin);
    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);
    printf("A área do círculo é = %.3f m. \n", PI * (raio * raio)); 


    system("pause");
    return 0;
}
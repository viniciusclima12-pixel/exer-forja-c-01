//INCLUIR A BIBLIOTECA STDIO.H QUE PERMITE ENTRADA E SAIDA DE IFOS.(PRINTF E SCANF)


#include <stdio.h>

//INCLUIR A BIBLIOTECA STDLIB.H QUE PERMITE FUNCOES UTILITARIAS(system()))

#include <stdlib.h>

//DECLARAR A FUNCAO PRINCIPAL, ONDE O PROGRAMA COMECA SUA EXECUTADO

int main() {
   

    float num1, num2, respSub;
    printf("Digite o primeiro numero: ");

    scanf("%f", &num1);

    printf("Digite o segundo numero: ");

    scanf("%f", &num2);

    respSub = num1 - num2;
    printf("A subtração dos numeros e: %.2f \n" ,respSub);
    

   





   //pausar o sistema ate o usuario pressione qualquer tecla
   system("pause");
   //finaliza o programa retornando 0, indicadndo que tudo deu certo
  return 0;
}
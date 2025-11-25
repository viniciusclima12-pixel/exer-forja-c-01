//INCLUIR A BIBLIOTECA STDIO.H QUE PERMITE ENTRADA E SAIDA DE IFOS.(PRINTF E SCANF)


#include <stdio.h>

//INCLUIR A BIBLIOTECA STDLIB.H QUE PERMITE FUNCOES UTILITARIAS(system()))

#include <stdlib.h>

//DECLARAR A FUNCAO PRINCIPAL, ONDE O PROGRAMA COMECA SUA EXECUTADO

int main() {
   
    float media1, media2, media3, respMedia;
    printf("Digite a primeira media: ");
    scanf("%f", &media1);
    printf("Digite a segunda media: ");
    scanf("%f", &media2);
    printf("Digite a terceira media: ");
    scanf("%f", &media3);
    respMedia = (media1 + media2 + media3) / 3;
    printf("A media dos numeros e: %.2f \n" ,respMedia);
    

    

   





   //pausar o sistema ate o usuario pressione qualquer tecla
   system("pause");
   //finaliza o programa retornando 0, indicadndo que tudo deu certo
  return 0;
}
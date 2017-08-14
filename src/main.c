#include <stdio.h>
#include <string.h>

//Amanda Winder Ribeiro Coelho RA 160284
int main() {

   char entrada[300]; //declaração da variavel que receberá a string
   int words=0, tam=0, i=0; //contador de palavras e variaveis auxiliares

   scanf("%[^\n]s", entrada); //recebe a entrada ate o usuario apertar enter
   tam=strlen(entrada); //nos informa a quantidade de caracteres inseridos pelo usuario

   while(i<tam){ //percorremos todo o "vetor" de caracteres analisando caracteres especificos como espaco, ponto, virgula, exclamacao
        while(entrada[i] != '\0'){ //enquando for diferente do caracter de valor nulo
        if((entrada[i]>=32 && entrada[i] <=46) || (entrada[i]>=58 && entrada[i] <=63)){ //observa e incrementa os simbolos de acordo com a tabela ascii
            words++;

            if(entrada[i]>=44 && entrada[i]<=46){  //analisa se depois do ponto ou da virgula vem um numero
                i++;
                if(entrada[i]>=48 && entrada[i]<=57) 
                words--;

            }
            else
            i++;


            while((entrada[i]>=32 && entrada[i] <=46) || (entrada[i]>=58 && entrada[i] <=63))
                i++;
        }

        while((entrada[i] <32 || entrada[i] > 46) && (entrada[i]<58 || entrada[i] >63) && entrada[i]!= '\0'){ // outros tipos de caracteres
            i++;
            if(entrada[i]=='\0')
                words++;
        }
    }
        
        printf("%d\n", words); //imprime no final o numero de palavras
        break;
   }
   return 0;
 }

 

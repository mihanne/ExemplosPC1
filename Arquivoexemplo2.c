#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
FILE *p;
char c, str[30], frase[80] = "Este e um arquivo chamado: ";
int i;
/* Le um nome para o arquivo a ser aberto: */
printf("\n\n Entre com um nome para o arquivo:\n");
gets(str);
if (!(p = fopen(str,"w"))) /* Caso ocorra algum erro na abertura do arquivo..*/
{
/* o programa aborta automaticamente */
printf("Erro! Impossivel abrir o arquivo!\n");
exit(1);
}
/* Se nao houve erro, imprime no arquivo e o fecha ...*/
strcat(frase, str);
for (i=0; frase[i]; i++)
putc(frase[i],p);
fclose(p);
/* Abre novamente para leitura*/
p = fopen(str,"r");
c = getc(p); /* Le o primeiro caracter */
while (!feof(p))/* Enquanto não se chegar no
Final do arquivo */
{
printf("%c",c); /* Imprime o caracter na tela */
c = getc(p); /* Le um novo caracter no arquivo */
}
fclose(p); /* fecha o arquivo*/
}


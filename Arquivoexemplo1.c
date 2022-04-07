#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp;
char c;
fp = fopen("arquivoteste.txt","r");
/* Arquivo ASCII, para
leitura */
if(!fp)
{
printf( "Erro na abertura do arquivo");
exit(0);
}
while((c = getc(fp) ) != EOF)
/* Enquanto não chegar ao final do arquivo */
printf("%c", c);
/* imprime o caracter lido */
fclose(fp);
return 0;
}

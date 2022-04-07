#include <stdio.h>
int main ()
{
char string[100];
/* String, ate' 99 caracteres */
int i, cont;
printf("\n\nDigite uma frase: ");
gets(string); /* Le a string */
printf("\n\nFrase digitada:\n%s", string);
cont = 0;
for (i=0; string[i] != '\0'; i=i+1)
{
if ( string[i] == 'c' )
/* Se for a letra 'c' */
cont = cont +1;
/* Incrementa o contador de
caracteres */
}
printf("\nNumero de caracteres c = %d", cont);
return(0);
}

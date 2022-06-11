#include <stdio.h>
int EPar (int a)
{
if (a%2)
/* Verifica se a e divisivel por
dois */
return 0;
/* Retorna 0 se nao for divisivel
*/
else
return 1;
/* Retorna 1 se for divisivel */
}
int main ()
{
int num;
printf ("Entre com numero: ");
scanf ("%d",&num);
if (EPar(num))
printf ("\n\nO numero e par.\n");
else
printf ("\n\nO numero e impar.\n");
return 0;
}


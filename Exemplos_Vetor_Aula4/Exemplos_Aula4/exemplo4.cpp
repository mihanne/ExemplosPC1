#include <stdio.h>
int main ()
{
int num[100]; /* Declara um vetor de inteiros de 100 posicoes */
int count=0;
int totalnums;
do
{
printf ("\nEntre com um numero (-999 p/ terminar): ");
scanf ("%d",&num[count]);
count++;
} while (num[count-1]!=-999);
totalnums=count-1;
printf ("\n\n\n\t Os n�meros que voc� digitou foram:\n\n");
for (count=0;count<totalnums;count++)
printf (" %d",num[count]);
return(0);
}







# include <stdio.h>
# include <math.h> /*Biblioteca para as funções SQRT e POW para calcular raiz quadrada
e quadrado de um número*/
int numero;
float raiz_quadrada, quadrado;
int main ()
{
printf ("Entre com um numero inteiro (positivo ou negativo): ");
scanf ("%d",&numero);
if (numero > 0)
{
raiz_quadrada=sqrt(numero);
printf ("\nRaiz Quadrada de %d = %.2f\n\n",numero, raiz_quadrada);
}
else
{
quadrado=pow(numero,2);
printf ("\nQuadrado de %d = %.2f\n\n",numero, quadrado);
}
return (0);
}

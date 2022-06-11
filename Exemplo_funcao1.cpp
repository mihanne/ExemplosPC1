#include <stdio.h>
int Square (int a)
{
return (a*a);
}
int main ()
{
int num;
printf ("Entre com um numero: ");
scanf ("%d",&num);
num=Square(num);
printf ("\n\nO seu quadrado vale: %d\n",num);
return 0;
}


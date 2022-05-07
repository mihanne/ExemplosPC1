#include<stdio.h>
#include<string.h>
main()
{
char nome[30]; int x,t;
printf("\n\n DIGITE UM NOME: ");
gets(nome);
t=strlen(nome);
for(x=t-1;x>=0;x--)
printf("%c",nome[x]);
printf("\n\n");
return(0);
}








#include<stdio.h>
#include<stdlib.h>

int validaString(char caractere)
{
	if (caractere=='a'||caractere=='e'||caractere=='i'||caractere=='o'||caractere=='u')
		return 1;
	else
		return 0;	
}

int main()
{
	char caractere;
	printf("\n Digite um caractere ");
	scanf("%s",&caractere);
	printf("\n");
	printf("%d",validaString(caractere));
	return(0);
}

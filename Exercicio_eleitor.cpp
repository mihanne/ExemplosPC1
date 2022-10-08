#include <stdio.h>
int main ()
{
	int idade;
	printf("Informe sua idade:\n");
	scanf("%d",&idade);	
	if (idade<16)
		printf("\nMenos de 16 anos nao votam\n");
	if (idade<18)
		printf("\nEleitor Facultativo\n");
	if (idade<=65)
		printf("\nEleitor Obrigatorio\n");
	else
		printf("\nEleitor Facultativo\n");
	return 0;
}
	

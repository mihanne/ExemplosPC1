#include<stdio.h>
#include<stdlib.h>

void preenche(int vetp[])
{
	int x;
	for (x=0; x<6; x++)
	{
		// [%d] e o x vao mostrar a posição do número digitado
		printf ("\t[%d] Digite um numero: ",x);
		scanf("%d",&vetp[x]);
		printf ("\n");
	}
}
void imprimevet(int vetp[])
{
	int x;
	for (x=0; x<6; x++)
	printf (" [%d] %d\t",x,vetp[x]);
}

void quadrado(int vetp[])
{
	int x;
	for(x=0; x<6; x++)
	printf("%d\t",vetp[x]*vetp[x]);
}

void primultimo(int vetp[])
{
	printf ("%d\t %d\t",vetp[0], vetp[5]);
}

int vetp[5];

main()
{
	int x, resp;
	resp=1;
	while(resp!=0)
	{
		printf("\n 1 - Preenche o vetor: ");
		printf("\n");
		printf("\n 2 - Imprime o vetor: ");
		printf("\n");
		printf("\n 3 - Imprime o quadrado do vetor original: ");
		printf("\n");
		printf("\n 4 - Imprime o primeiro e ultimo numero: ");
		printf("\n");
		printf("\n 0 - Sair do programa: ");
		scanf("%d",&resp);
		printf("\n");
		if(resp==0)break;
		if(resp==1)
			preenche(vetp);
		if(resp==2)
			imprimevet(vetp);
		if(resp==3)
			quadrado(vetp);
		if(resp==4)
			primultimo(vetp);
		printf("\n");
		system("pause");
		system("cls");
	}
	return(0);
}


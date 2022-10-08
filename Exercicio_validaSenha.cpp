#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int senha;
	do{
	//	system("cls");
		printf("\nDigite a senha:\n");
		scanf("%d", &senha);
		if (senha==2022)
			printf("\nAcesso permitido!\n");
		else
			printf("\Acesso negado!\n");
	//	system("pause");
	}while(senha!=2022);
	return 0;
}

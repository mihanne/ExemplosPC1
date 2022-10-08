#include <stdio.h>
int main ()
{
	int codigo;
	printf("Informe um codigo:\n");
	scanf("%d",&codigo);
	switch (codigo){
		case 1:
			printf("Regiao Sul:\n");
			break;
		case 2:
			printf("Regiao Norte:\n");
			break;
		case 3:
			printf("Regiao Leste:\n");
			break;
		case 4:
			printf("Regiao Oeste:\n");
			break;
		default:
			printf("Nenhuma regiao:\n");
			break;
	}
	return 0;
}

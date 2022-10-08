#include <stdio.h>
int main ()
{
	int i,soma=0;
	for (i=1; i<=1000;i++){
		if (i%2==0)
			soma=soma+i;
	}
	printf("A soma dos numeros pares entre 1 e 1000: %d", soma);
}

#include <stdio.h>
int main()
{
float temperatura;
printf("Informe a temperatura: ");
scanf("%f", &temperatura);
if (temperatura > 120)
{
	printf("Aten��o: temperatura acima do m�ximo permitido");
	printf("Verifique o estado da v�lvula de ar frio");
}
else
{
	printf("Temperatura est� dentro da faixa esperada");
}

return 0;
}

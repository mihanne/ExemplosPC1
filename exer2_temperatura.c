#include <stdio.h>
int main()
{
float temperatura;
printf("Informe a temperatura: ");
scanf("%f", &temperatura);
if (temperatura > 120)
{
	printf("Atenção: temperatura acima do máximo permitido");
	printf("Verifique o estado da válvula de ar frio");
}
else
{
	printf("Temperatura está dentro da faixa esperada");
}

return 0;
}

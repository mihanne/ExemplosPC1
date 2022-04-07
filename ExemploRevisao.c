#include<stdio.h>
int main()
{
int horas, velmedia;
float distancia, consumo;
printf("Informe o tempo gasto na viagem em horas: ");
scanf("%d", &horas);
printf("Informe a velocidade média do veículo: ");
scanf("%d", &velmedia);
distancia = horas * velmedia;
consumo = distancia / 12;
printf("Foram gastos %4.2f de combustivel",consumo);
system("pause");
return 0;

}



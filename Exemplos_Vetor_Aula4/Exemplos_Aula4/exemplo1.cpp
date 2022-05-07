#include <stdio.h>
int main()
{
int opcao;
while (opcao != 5)
{
printf("\n\n Escolha uma opcao entre 1 e 5: ");
scanf("%d", &opcao);
if ((opcao > 5)||(opcao <1)) continue; /* Opcao
invalida: volta ao inicio do loop */
switch (opcao)
{
case 1:
printf("\n --> Primeira opcao..");
break;
case 2:
printf("\n --> Segunda opcao..");
break;
case 3:
printf("\n --> Terceira opcao..");
break;
case 4:
printf("\n --> Quarta opcao..");
break;
case 5:
printf("\n --> Abandonando..");
break;
}
}
return(0);
}


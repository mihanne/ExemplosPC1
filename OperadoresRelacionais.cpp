#include <stdio.h>
int main()
{
int i, j;
printf("\nEntre com dois números inteiros: ");
scanf("%d%d", &i, &j);
printf("\n%d == %d e %d\n", i, j, i==j);
printf("\n%d != %d e %d\n", i, j, i!=j);
printf("\n%d <= %d e %d\n", i, j, i<=j);
printf("\n%d >= %d e %d\n", i, j, i>=j);
printf("\n%d < %d e %d\n", i, j, i<j);
printf("\n%d > %d e %d\n", i, j, i>j);
return(0);
}

#include <stdio.h>
int main ()
{
 int n, num, k, primo;

    for(num=1; num<=100; num++)
    {
        primo=0;
        for(k=1; k<=num; k++)
        {
            if((num%k)==0)
                 primo++;
        }
        if(primo>2)
            printf("%d nao e primo\n", num);
        else
            printf("%d e primo\n", num);
    }

return(0);
}

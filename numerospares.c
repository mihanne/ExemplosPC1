#include <stdio.h>
int main ()
{
    int num;
    for (num=1;num<=100;num=num+1)
    {
        if (num%2!=0)
            printf ("%d ",num);
    }

return(0);
}

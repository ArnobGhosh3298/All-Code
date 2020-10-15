#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
    if(a>5 && a<2000)
    {
        while (i<=a)
        {
            if (i%2==0)
            {
                printf("%d^2 = %d\n",i,i*i);
            }
            i++;
        }
        
    }
    return 0;
}
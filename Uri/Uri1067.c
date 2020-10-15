#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
    if(a>=1 && a<=1000)
    {
    while(i<=a)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    }
    return 0;
}
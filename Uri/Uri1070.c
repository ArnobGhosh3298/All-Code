#include<stdio.h>
int main()
{
    int a,i=0,j=0;
    scanf("%d",&a);
    j=a+12;
    for(i=a;i<j;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
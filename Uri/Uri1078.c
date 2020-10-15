#include<stdio.h>
int main()
{
    int a,i=1;
    scanf("%d",&a);
    if(a>2 && a<1000)
    {
        while (i<=10)
        {
            printf("%d x %d = %d\n",i,a,i*a);
            i++;
        }
        
    }
    return 0;
}
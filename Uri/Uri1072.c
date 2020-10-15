#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,*b,i=0,in=0,out=0;
    scanf("%d",&a);
    b=(int*)malloc(a*sizeof(int));
    while (i<a)
    {
        scanf("%d",&b[i]);
        if(b[i]>=10 && b[i]<=20)
        {
            in++;
        }
        else
            out++;
        i++;
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
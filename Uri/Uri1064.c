#include<stdio.h>
int main()
{
    float a[6], sum=0;
    int i=0,j=0;
    while(i<6)
    {
        scanf("%f",&a[i]);
        if(a[i]>0)
        {
            sum=sum+a[i];
            
            j++;
        }
        i++;
    }
    printf("%d valores positivos\n",j);
    printf("%.1f\n",sum/j);
    return 0;
}
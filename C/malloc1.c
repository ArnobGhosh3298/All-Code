#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    double *ptr,n=0;
    scanf("%lf",&n);
    ptr= (double*) malloc (n*sizeof(double));
    while (i<n)
    {
        scanf("%lf", (ptr+i));
        i++;
    }
    i=0;
    while (i<n)
    {
        printf("%.1lf ", *(ptr+i));
        i++;
    }
    return 0;
}
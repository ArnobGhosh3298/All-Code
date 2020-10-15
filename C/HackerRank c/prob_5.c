#include<stdio.h>
#include<math.h>
void add(int *a, int *b)
{
    printf("%d\n",*a+*b);
}
void ab(int*a, int *b)
{
    if(*a>*b)
    printf("%d\n",*a-*b);
    else if(*b>*a)
    printf("%d\n",*b-*a);
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    add(&x,&y);
    ab(&x,&y);
    return 0;
}
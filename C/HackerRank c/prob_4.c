#include <stdio.h>

/*int max(int a, int b)
{
    if(a>b)
    return a;
    else if (b>a)
    return b;
};
int main()
{
    int w,x,y,z,high=0;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    high=max(w,x);
    high=max(high,y);
    high=max(high,z);
    printf("%d\n",high);
    return 0;
}*/
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (b > a && b > c && b > d)
        printf("%d\n", b);
    else if (c > b && c > a && c > d)
        printf("%d\n", c);
    else if (a > b && a > c && a > d)
        printf("%d\n", a);
    else if (d > b && d > c && d > a)
        printf("%d\n", d);
    return 0;
}
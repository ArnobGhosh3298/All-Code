#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    printf("%d %d\n%.1f %.1f", a + b,a - b, c + d, c - d);
}
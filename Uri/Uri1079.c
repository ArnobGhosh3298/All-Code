#include <stdio.h>
int main()
{
    int n, i = 0;
    float a, b, c, ans;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%f %f %f", &a, &b, &c);
        ans = ((a * 2) + (b * 3) + (c * 5)) / 10;
        printf("%.1f\n", ans);
        i++;
    }
}
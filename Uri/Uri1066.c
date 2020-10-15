#include <stdio.h>
int main()
{
    int a[5], i = 0, even = 0, odd = 0, pos = 0, neg = 0;
    while (i < 5)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
        }
        if (a[i] % 2 != 0)
        {
            odd++;
        }
        if (a[i] > 0)
        {
            pos++;
        }
        if (a[i] < 0)
        {
            neg++;
        }
        i++;
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    // this is nothing
    return 0;
}
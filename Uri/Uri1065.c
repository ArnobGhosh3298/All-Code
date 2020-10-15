#include <stdio.h>
int main()
{
    int a[5], i = 0, j = 0;
    while (i < 5)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            j++;
        }

        i++;
    }
    printf("%d valores pares\n", j);
    return 0;
}
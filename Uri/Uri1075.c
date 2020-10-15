#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    if (a < 10000)
    {
        for (i = 1; i <= 10000; i++)
        {
            if (i % a == 2)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a, i = 0, num[i];
    scanf("%d", &a);

    for(i=0;i<a;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0;i<a;i++)
    {
        if (num[i] > 0 && num[i] % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (num[i] > 0 && num[i] % 2 != 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (num[i] < 0 && num[i] % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (num[i] < 0 && num[i] % 2 != 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (num[i] == 0)
        {
            printf("NULL\n");
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a, i = 0, num;
    scanf("%d", &a);
    if (a < 1000)
    {
        while(i<a)
        {
            scanf("%d",&num);
            if(num>0 && num%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if (num > 0 && num % 2 != 0)
            {
                printf("ODD POSITIVE\n");
            }
            else if (num < 0 && num % 2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else if (num < 0 && num % 2 != 0)
            {
                printf("ODD NEGATIVE\n");
            }
            else if (num == 0)
            {
                printf("NULL\n");
            }
            i++;
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, i, sum = 0;
    printf("Enter the number of sum: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
    free(ptr);
    printf("Sum : %d\n", sum);

    return 0;
} 
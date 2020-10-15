#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *arr, i, sum = 0;
    printf("Enter the number of sum: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    free(arr);
    printf("Sum : %d\n", sum);

    return 0;
} 
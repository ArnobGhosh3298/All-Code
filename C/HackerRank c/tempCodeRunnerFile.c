#include<stdio.h>
#include <string.h>
#define MAX_LEN 128
int main()
{
    char ch,s[20],sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("%[^\n]%*c",&sen);
    printf("%c\n%s\n%s\n",ch,s,sen);
    return(0);
}
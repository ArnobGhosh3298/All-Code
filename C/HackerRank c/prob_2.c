#include <stdio.h>
#include <string.h>
#define M 30
int main()
{
    char ch, s[M], sen[M];
    scanf("%c", &ch);
    scanf("%s\n", &s);                     //akhane %s er pore /n dite hobe, na hole line sesh hobe na
    scanf("%[^\n]%*c", &sen);             //^\n dia bujhaitese je   
    printf("%c\n%s\n%s\n", ch, s, sen);  //\n paile line sesh hoibo,! ba. o use kora jay.
    return 0;                           //er * dia newline character is discarded.
}
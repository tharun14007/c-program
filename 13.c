#include <stdio.h>
int main() 
{
    int ch;
    printf("Enter the Character: ");
    scanf("%d",ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
    printf("The given character is alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
    printf("The given character is digits");
    }
    else
    {
    printf("The given character is special character");
    }
    return 0;
}


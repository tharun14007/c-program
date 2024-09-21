#include <stdio.h>
int main() 
{
    int alpha;
    printf("Enter the Character: ");
    scanf("%d",alpha);
    if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    {
    printf("The given character is Alphabet");
    } 
    else
    {
    printf("The given character is not Alphabet");
    }
    return 0;
}

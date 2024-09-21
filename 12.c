#include <stdio.h>
int main() 
{
    int ch;
    printf("Enter the Character: ");
    scanf("%d",ch);
    if (ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch== 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
    {
    printf("The given character is vowel");
    } 
    else
    {
    printf("The given character is not vowel");
    }
    return 0;
}

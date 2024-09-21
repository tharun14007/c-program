#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if ((num % 5==0) && (num % 11==0) ) {
    printf("The given number is divisible by 5 and 11");
    else
    {
    printf("The given number is not divisible by 5 and 10");
    }
    return 0;
}


#include <stdio.h>
int main() 
{
    int age;
    printf("Enter the age :");
    scanf("%d",age);
    if (age >= 18)
    printf("The person is eligible for voting");
    else
    {
    printf("The person is not eligible for voting");
    }
    return 0;
}

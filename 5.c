#include <stdio.h>
int main()
{
    int x = 5, y = 10;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("The maximum number is: %d\n", x);
    } else if (x < y) {
        printf("The maximum number is: %d\n", y); 
    } else {
        // Corrected the message for when both numbers are equal
        printf("Both numbers are equal: %d\n", x); 
    }
    
    return 0;
}

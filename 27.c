#include <stdio.h>

int main() {
    char ch;
    int points = 0;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        points = 10;
    }
    else if (ch >= '0' && ch <= '9') {
        points = 5;
    }
    else {
        points = 0;
    }
    printf("Points scored: %d\n", points);

    return 0;
}

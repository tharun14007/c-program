#include <stdio.h>
void add1() {
    int a = 5, b = 10;
    printf("Sum (no argument, no return): %d\n", a + b);
}
int add2() {
    int a = 5, b = 10;
    return a + b;
}
void add3(int a, int b) {
    printf("Sum (with argument, no return): %d\n", a + b);
}
int add4(int a, int b) {
    return a + b;
}

int main() {
    add1();
    printf("Sum (no argument, with return): %d\n", add2());
    add3(5, 10);
    printf("Sum (with argument, with return): %d\n", add4(5, 10));

    return 0;
}

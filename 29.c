#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in m: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Normal weight\n");
    } else if (bmi >= 25) {
        printf("Overweight\n");
    }
    return 0;
}

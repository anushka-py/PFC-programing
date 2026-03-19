#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;
    printf("Enter Celsius degree: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    fahrenheit = (9.0 / 5) * celsius + 32;
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}

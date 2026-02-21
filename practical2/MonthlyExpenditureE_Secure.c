/* Secure monthly expenditure calculator
Practical 2, Part 3
anushka  maharjan

Secure improvement: Replaced unsafe scanf() with fgets() and strtof() for input parsing and validation. Added input checks and used named constant for accommodation. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 64

int get_float(const char *prompt, float *value) {
    char buffer[BUFFER_SIZE];
    char *endptr;
    printf("%s", prompt);
    if (!fgets(buffer, sizeof(buffer), stdin)) {
        printf("Input error.\n");
        return 0;
    }
    *value = strtof(buffer, &endptr);
    if (endptr == buffer || *value < 0) {
        printf("Invalid or negative input.\n");
        return 0;
    }
    return 1;
}

int main(void) {
    float foodExpenses, leisureExpenses, clothesExpenses, travelExpenses, totalSpent;
    const int ACCOMMODATION = 500;

    if (!get_float("Enter food expenses: ", &foodExpenses)) return 1;
    if (!get_float("Enter leisure expenses: ", &leisureExpenses)) return 1;
    if (!get_float("Enter clothes expenses: ", &clothesExpenses)) return 1;
    if (!get_float("Enter travel expenses: ", &travelExpenses)) return 1;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + ACCOMMODATION + travelExpenses;
    printf("The total expenditure this month was Rs %.2f\n\n", totalSpent);
    return 0;
}

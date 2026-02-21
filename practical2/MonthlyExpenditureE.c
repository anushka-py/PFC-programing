#include <stdio.h>
#include <stdio.h>

int main(void) {
    float foodExpenses, leisureExpenses, clothesExpenses, travelExpenses, totalSpent;
    const int ACCOMMODATION = 500;

    printf("Enter food expenses: ");
    if (scanf("%f", &foodExpenses) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter leisure expenses: ");
    if (scanf("%f", &leisureExpenses) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter clothes expenses: ");
    if (scanf("%f", &clothesExpenses) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter travel expenses: ");
    if (scanf("%f", &travelExpenses) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + ACCOMMODATION + travelExpenses;
    printf("The total expenditure this month was Rs %.2f\n\n", totalSpent);
    return 0;
}

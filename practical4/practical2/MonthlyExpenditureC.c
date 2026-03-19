#include <stdio.h>
#include <stdio.h>

int main(void) {
    
    float foodExpenses = 250.0;
    float leisureExpenses = 80.0;
    float clothesExpenses = 60.0;
    float accommodationExpenses = 500.0;
    float travelExpenses = 120.0;
    float totalSpent;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses + travelExpenses;
    printf("The total expenditure this month was Rs %.2f\n\n", totalSpent);
    return 0;
}

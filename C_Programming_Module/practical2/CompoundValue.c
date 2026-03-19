#include <stdio.h>

int main(void) {
    double monthly_saving, account_value = 0.0;
    const double monthly_interest_rate = 0.05 / 12;
    printf("Enter monthly saving amount: ");
    if (scanf("%lf", &monthly_saving) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    for (int month = 1; month <= 6; ++month) {
        account_value = (account_value + monthly_saving) * (1 + monthly_interest_rate);
    }
    printf("Account value after 6 months: %.2f\n", account_value);
    return 0;
}

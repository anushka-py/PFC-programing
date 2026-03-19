#include <stdio.h>
int main() {
    int days, month, year;
    const char *months[] = {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter the month (1-12): ");
    if (scanf("%d", &month) != 1 || month < 1 || month > 12) {
        printf("Invalid month. Please enter a number between 1 and 12.\n");
        return 1;
    }
    printf("Enter the year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        printf("Invalid year. Please enter a positive integer.\n");
        return 1;
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; 
            } else {
                days = 28; 
            }
            break;
    }
    printf("%s %d has %d days.\n", months[month - 1], year, days);
    return 0;
}
#include <stdio.h>
int main() {
    int today, futureday, futuredays;

    printf("Enter today's day: ");
    if (scanf("%d", &today) != 1) {
        printf("Invalid input for today's day.\n");
        return 1;
    }
    printf("Enter the number of days after today: ");
    if (scanf("%d", &futuredays) != 1) {
        printf("Invalid input for future days.\n");
        return 1;
    }
    futureday = (today + futuredays) % 7;
    printf("The future day is: ");
    switch (futureday) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
    }
    return 0;
}
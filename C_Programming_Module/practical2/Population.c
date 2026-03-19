#include <stdio.h>

int main(void) {
    const int current_population = 312032486;
    const int seconds_per_year = 365 * 24 * 60 * 60;
    int births_per_year = seconds_per_year / 7;
    int deaths_per_year = seconds_per_year / 13;
    int immigrants_per_year = seconds_per_year / 45;
    int population = current_population;

    printf("Year\tPopulation\n");
    for (int year = 1; year <= 5; ++year) {
        population += births_per_year - deaths_per_year + immigrants_per_year;
        printf("%d\t%d\n", year, population);
    }
    return 0;
}

#include <stdio.h>

int main() {
    float usage, water_usage = 0;

    // Input
    printf("Enter daily water usage (litres): ");
    scanf("%f", &usage);

    water_usage = water_usage + usage;

    // Rule 1: Water usage
    if (water_usage <= 100) {
        printf("Efficient Usage\n");
    } else {
        printf("High usage detected\n");
    }

    return 0;
}

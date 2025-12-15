#include <stdio.h>

int main() {
    float usage;
    int saved_days;

    // Input
    printf("Enter your monthly water usage (litres): ");
    scanf("%f", &usage);

    printf("Enter number of days water was saved (usage < 80 L/day): ");
    scanf("%d", &saved_days);

    if (usage < 2500 && saved_days > 10) {
        printf("Bonus: 300 PKR Discount\n");
    } else {
        printf("No Bonus\n");
    }

    return 0;
}

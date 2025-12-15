#include <stdio.h>

int main() {
    float usage, bill = 0;
    int family_size, code, saved_days, fine = 0, bonus = 0;

    // Input
    printf("Enter monthly water usage (litres): ");
    scanf("%f", &usage);

    printf("Enter family size: ");
    scanf("%d", &family_size);

    printf("Enter category code (1-4): ");
    scanf("%d", &code);

    
    switch (code) {
        case 1: printf("Category: Low Usage Household\n"); break;
        case 2: printf("Category: Average Household\n"); break;
        case 3: printf("Category: High Usage Household\n"); break;
        case 4: printf("Category: Excessive Usage Household\n"); break;
        default: printf("Category: Invalid Code\n");
    }

    if (usage <= 3000)
        bill = 500;
    else
        bill = 1000;

    if (usage > 3000) {
        if (family_size > 6) {
            printf("Allowed: Large Family Exception (No Fine)\n");
        } else if (usage <= 5000) {
            fine = 200;
        } else if (usage <= 7000) {
            fine = 500;
        } else {
            fine = 1000;
            printf("Water Supply Restricted\n");
        }
    }

    printf("Enter number of saved days (usage < 80 L/day): ");
    scanf("%d", &saved_days);

    if (usage < 2500 && saved_days > 10) {
        bonus = 300;
    }
    
    printf("\n--- Water Billing Summary ---\n");
    printf("Base Bill: %.2f PKR\n", bill);
    printf("Fine: %d PKR\n", fine);
    printf("Bonus: %d PKR\n", bonus);
    printf("Total Payable: %.2f PKR\n", bill + fine - bonus);

    return 0;
}

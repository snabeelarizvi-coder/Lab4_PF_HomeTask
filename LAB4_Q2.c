#include <stdio.h>

int main() {
    float usage;

    // Input
    printf("Enter your monthly water usage (litres): ");
    scanf("%f", &usage);

    if (usage <= 3000) {
        printf("Bill = 500 PKR\n");
    } else {
        printf("Bill = 1000 PKR\n");
    }

    return 0;
}

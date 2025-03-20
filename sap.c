#include <stdio.h>

// Function to calculate factorial using a loop
unsigned long long int factorial(int n) {
    unsigned long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Factorial of %d = %llu\n", number, factorial(number));
    return 0;
}


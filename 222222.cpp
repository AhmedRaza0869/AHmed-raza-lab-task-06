#include<stdio.h>
int main() {
    int n;
   int  factorial = 1; // Use long long for factorial to handle larger numbers
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n == 0) {
        printf("Factorial of 0 is: 1\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; // Multiply factorial by each number from 1 to n
        }
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}
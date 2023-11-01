#include <stdio.h>
// write a program to check if a number is a prime number or not
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible by any number between 2 and sqrt(num), not prime
        }
    }

    return 1; // If not divisible by any number between 2 and sqrt(num), prime
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

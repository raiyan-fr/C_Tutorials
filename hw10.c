#include <stdio.h>
#include <stdbool.h>
// write a program to print prime numbers in range 

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

void print_primes_in_range(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    print_primes_in_range(start, end);

    return 0;
}

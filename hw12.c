#include <stdio.h>
 // write a function to print n terms of the fibonacci sequences

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm1 + fibnm2;
    printf ("fibonacci of %d term : %d \n", n, fibn);
    return fibn;
}
int main() {
   // printf("so the the end term: %d", fib(10));
    //printf("\n");
    //write a program to store first nth of fibonacci sequences
    
    int n;
    printf("enter the nth term (n>2): ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2 ;i<n ;i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("fibonacci sequences = %d \t", fib[i]);
        printf("\n");
    }

    return 0;
}
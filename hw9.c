#include <stdio.h>
// print the factorial of a number (n).

int main() {
    int n;
    printf("enter a no: ");
    scanf("%d", &n);

     int fact = 1;
     for(int i = 1 ; i <= n ; i++) {
        fact = fact * i;
     }
     printf("factorial: %d \n" , fact);
    return 0;
}
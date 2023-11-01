#include <stdio.h>
// print the smallest no.

int main() {
    int x;
    printf(" enter x: ");
    scanf("%d" , &x);

    int y;
    printf(" enter y: ");
    scanf("%d" , &y);

   x < y ? printf("smallest no: %d \n", x) : printf("smallest no: %d \n" , y);
    return 0;

}
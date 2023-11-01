#include <stdio.h>
// find the avg of 3 no.

int main() {
    float a;
    printf("enter a: ");
    scanf("%f" , &a);

    float b;
    printf("enter b: ");
    scanf("%f" , &b);

    float c;
    printf("enter c: ");
    scanf("%f" , &c);

    printf("avg of 3 no: %f \n" ,(a + b + c) / 3);
    return 0;

}

#include <stdio.h>
// write whether a no. is +ve or -ve, even or odd
int main() {
   int x;
   printf("enter the no:");
   scanf("%d", &x);
  
  if(x >= 0) {
    printf("positive \n");
    if(x % 2 == 0) {
        printf("even \n");
    } else {
        printf("odd \n");
    }
  } else {
    printf("negative \n");
    if(x % 2 == 0) {
        printf("even \n");
    } else {
        printf("odd \n");
  }
  }

  
    return 0;
}
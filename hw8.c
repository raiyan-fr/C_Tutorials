#include <stdio.h>
 //write the table of (n given) number 
 int main() {

  int n;
 do{
  printf("enter a no: ");
  scanf("%d", &n);
  printf("%d \n", n);

  if(n % 7 == 0) {
    break;
  }

 } while(1);
  printf("thank you");
return 0;
}
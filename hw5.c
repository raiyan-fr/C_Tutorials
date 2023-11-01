#include <stdio.h>
//age verification

 int main() {
    int age;
    printf("enter age: ");
    scanf("%d" , &age);

    if(age >= 65) {
        printf("old \n");
    }
    else if(age >= 18 && age < 65) {
        printf("adult \n");
    }

    else if(13 <= age && age < 18)  {
        printf("teenager \n");
    }

    else {
        printf("minor");
    }
    return 0;
 }

 
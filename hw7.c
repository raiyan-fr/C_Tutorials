#include <stdio.h>
// write a program to give grades to a student

int main() {
    int marks;
    printf("enter marks: ");
    scanf("%d" , &marks);

    if(marks < 30 && marks >= 0) {
        printf("C grade");
    } else if (30 <= marks && marks < 70) {
        printf("B grade");
} else if (70 <= marks && marks < 90) {
        printf("A grade");
} else if (90 <= marks && marks <= 100) {
        printf("A+ grade");
} else {
    printf("invalid marks");
}
return 0;
}
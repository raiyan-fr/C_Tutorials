# include <stdio.h>
//sum of n through recursion

int sum(int n) {
    if(n == 0){
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int sumnm1 = sum(n-1);
    int sumn = sum(n-1) + n;
    return sumn;
}
int main() {
    int a;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("sum is : %d", sum(a));
    return 0;
}
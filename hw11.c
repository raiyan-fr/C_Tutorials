#include <stdio.h>
// some writings for different language (through function)
void indian() {
    printf("hey hii hello \n");
    printf("I'm raiyan\n");
    printf("see ya \n");
} 
void french() {
    printf("comment allez-vous\n");
     printf("Je m'appelle Raiyan Ali\n");
}
void arab() {
    printf("مرحبا عزيزي كيف حالك\n");
    printf("اسمي ريان علي خان\n");
    printf("حسنا مع السلامة أراك لاحقا\n");
}
int main() {
    printf("enter i for hindi and f for french and a for arabic\n");
    char ch;
    printf("enter your nation: ");
    scanf("%c", &ch);
    
if(ch == 'i') {
    indian();
}
else if(ch == 'f') {
    french();
} 
else if(ch == 'a') {
    arab();
}
    return 0;
}

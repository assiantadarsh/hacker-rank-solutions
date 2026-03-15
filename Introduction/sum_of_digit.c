// Problem- Sum of Digits of a Five Digit Number.
// Platform- Hackerrank
// Language - c

#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int sum = 0,digit;
    while(a !=0){
        digit = a%10;
        sum = sum + digit;
        a = a/10;
    }
    printf("%d",sum);
    return 0;  
}
   

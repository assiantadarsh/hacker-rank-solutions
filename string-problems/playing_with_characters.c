// Problem - Playing with characters
// Platform- Hackerrank
// Language - c

#include <stdio.h>
#include<string.h>
int main(){
char str[40];
char str1[40];
char str2[50];
scanf("%s",str);
scanf("%s",str1);
scanf(" %[^\n]",str2);
printf("%s\n%s",str,str1);
printf("\n%s",str2);
return 0;

}

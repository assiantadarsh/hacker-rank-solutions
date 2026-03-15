// Problem- Printing Tokens.
// Platform- Hackerrank
// Language - c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[6000];
    scanf(" %[^\n]",str);
    int i=0;
    while (str[i] !='\0') {
        if(str[i] == ' '){
            printf("\n");
            i++;
            continue;
            
        }
        printf("%c",str[i]);
        i++;
    }
}
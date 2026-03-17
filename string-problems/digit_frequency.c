// Problem-Arrays and Strings
// Platform-Hackerrank
// Languaage-C
// Time complexity- O(n)
// Space complexity-O(1)

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[1001];
    
    
    scanf("%[^\n]", str);

    
    for(int i = 0; i <= 9; i++) {
        int count = 0;
        
        
        for(int j = 0; str[j] != '\0'; j++) {
            
            int d = str[j] - '0';
            
            if(d == i) {
                count++;
            }
        }
        printf("%d ", count);
    }

    return 0;
}

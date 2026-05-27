#include <stdio.h>

int main() {
    char alpha[10] = {}; 
    
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &alpha[i]); 
    }

    char max_char = alpha[0];
    int max_count = 0;

    for (char *p = alpha; p < alpha + 10; p++) {
        int current_count = 0;
        
        for (char *q = alpha; q < alpha + 10; q++) {
            if (*p == *q) {
                current_count++;
            }
        }
        

        if (current_count > max_count) {
            max_count = current_count;
            max_char = *p;
        }
    }
    
    printf("%c%d\n", max_char, max_count);

    return 0;
}

#include <stdio.h>

int main() {
   
    char arr[100] = {}; 
    int N = 10; 

    char *p = NULL; 
    
    for (p = arr; p < arr + N; p++) {
        scanf(" %c", p);
    }

    char max_char = *arr; 
    int max_count = 0;

    for (p = arr; p < arr + N; p++) {
        int current_count = 0;
        
        
        for (char *q = arr; q < arr + N; q++) {
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

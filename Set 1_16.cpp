// 16. Function to print a pattern with increasing and fixed numbers.
#include <stdio.h>

void printPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        
        for (int j = i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        
        for (int k = rows; k > i + 1; k--) {
            printf("%d", rows);
        }
        
        printf("\n");
    }
}

int main() {
    int rows;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    printPattern(rows);

    return 0;
}

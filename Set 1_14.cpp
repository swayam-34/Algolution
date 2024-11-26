// 14. Function to print alternating pattern of ascending and descending numbers.
#include <stdio.h>

void printPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            
            for (int j = 1; j <= cols; j++) {
                printf("%d", j);
            }
        } else {
            
            for (int j = cols; j >= 1; j--) {
                printf("%d", j);
            }
        }
        
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    printPattern(rows, cols);

    return 0;
}

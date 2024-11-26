// 15. Function to print a bordered pattern with 1's and 0's inside.
#include <stdio.h>

void printPattern(int rows, int cols) {
    
    if (rows < 1 || cols < 1) {
        printf("Error: The number of rows and columns must be at least 1.\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("1");
            } else {
                printf("0");
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

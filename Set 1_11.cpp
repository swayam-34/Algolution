// 11. Function to print a right triangle pattern.
#include <stdio.h>

void printRightTriangle(int rows) {
    
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int rows;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    printRightTriangle(rows);

    return 0;
}

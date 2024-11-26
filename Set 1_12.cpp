// 12. Function to print a half-diamond pattern.
#include <stdio.h>

void printHalfDiamond(int cols) {
    
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = cols - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int cols;
    
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    
    printHalfDiamond(cols);

    return 0;
}

// 13. Function to print a diamond pattern (only odd number of rows allowed).
#include <stdio.h>

int printDiamond(int rows) {
    if (rows % 2 == 0) {
        printf("Error: The number of rows must be an odd number.\n");
        return 0;
    }

    int n = (rows + 1) / 2;

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 1;
}

int main() {
    int rows;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    if (printDiamond(rows)) {
        printf("Diamond pattern printed successfully.\n");
    }

    return 0;
}

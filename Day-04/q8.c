#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Using the mathematical formula: n * (n + 1) / 2
    int sum = n * (n + 1) / 2;
    
    printf("Sum=%d\n", sum);
    return 0;
}
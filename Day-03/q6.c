#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &a, &b);
    
    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;
    
    printf("After swap: %d %d\n", a, b);
    return 0;
}
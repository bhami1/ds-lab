#include <stdio.h>
#include <conio.h>
int main() {
    // This program prints the first 10 natural numbers except 3 and 5
    int i, n;
    // printf("Enter the value of n: ");
    // scanf("%d", &n);
    for(i = 1; i <= 10; i++) {
        if (i==3 || i ==5)
        {
            continue;
        }
        printf(" the first 10 natural numbers are %d\n", i);
    }
    return 0;
}
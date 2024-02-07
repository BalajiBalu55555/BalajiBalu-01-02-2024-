#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d values:\n", n);
    int i;
    for ( i = 0; i < n; ++i) {
        printf("Value %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nValues in reverse order are:\n");
    for ( i = n - 1; i >= 0; --i) {
        printf("%d ", array[i]);
    }
    return 0;
} 

#include <stdio.h>

int main() {
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements:\n", size);
    int i;
    for ( i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i]; 
    }

    printf("\nSum of elements in the array: %d\n", sum);

    return 0;
} 

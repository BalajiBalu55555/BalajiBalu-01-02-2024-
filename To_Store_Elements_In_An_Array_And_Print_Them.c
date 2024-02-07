#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d elements:\n", size);
    int i;
    for ( i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nElements stored in the array are:\n");
    for ( i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
} 

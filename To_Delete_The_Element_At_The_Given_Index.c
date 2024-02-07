#include <stdio.h>
int main() {
    int size, index;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Array is empty! Exiting program.\n");
        return 1;  
    }    int array[size];
    printf("Enter %d elements:\n", size);
    int i;
    for ( i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Enter the index to delete the element (0 to %d): ", size - 1);
    scanf("%d", &index);
    if (index < 0 || index >= size) {
        printf("Invalid index! Exiting program.\n");
        return 1;  
    }
    for ( i = index; i < size - 1; ++i) {
        array[i] = array[i + 1];
    }
    printf("\nArray after deleting the element at index %d:\n", index);
    for (i = 0; i < size - 1; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
} 

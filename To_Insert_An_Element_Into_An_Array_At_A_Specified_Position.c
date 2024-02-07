#include <stdio.h>
int main() {
    int size, position, newValue;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size + 1];  
    printf("Enter %d elements:\n", size);
    int i;
    for (i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Enter the position to insert the new element (1 to %d): ", size + 1);
    scanf("%d", &position);
    if (position < 1 || position > size + 1) {
        printf("Invalid position! Exiting program.\n");
        return 1;  
    }
    printf("Enter the new element value: ");
    scanf("%d", &newValue);
    for ( i = size; i >= position; --i) {
        array[i] = array[i - 1];
    }   
	array[position - 1] = newValue;
    printf("\nArray after inserting the new element:\n");
    for (i = 0; i <= size; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
} 

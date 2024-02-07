#include <stdio.h>

int main() {
    int size, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d elements:\n", size);
    int i,j;
    for ( i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for ( i = 0; i < size - 1; ++i) {
        for ( j = i + 1; j < size; ++j) {
            if (array[i] == array[j]) {
                count++;
                break; 
            }
        }
    }
    printf("\nTotal number of duplicate elements: %d\n", count);
    return 0;
} 

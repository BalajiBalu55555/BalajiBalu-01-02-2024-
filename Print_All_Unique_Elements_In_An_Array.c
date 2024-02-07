#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter %d elements:\n", size);
    int i,j;
    for ( i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\nUnique elements in the array are:\n");
    for ( i = 0; i < size; ++i) {
        int isUnique = 1;  
        for ( j = 0; j < size; ++j) {
            if (i != j && array[i] == array[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", array[i]);
        }
    }
    return 0;
} 

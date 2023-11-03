#include <stdio.h>

int main(void) {
    int arr[20], x, element, location;

    printf("Enter number of elements: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the location:  ");
    scanf("%d", &location);
        for (int i = x; i >= location - 1; i--) {
            arr[i] = arr[i-1];
        }
        x++;

        arr[location - 1] = element;
        

        printf("The array after modification:\n");
        for (int i = 0; i < x; i++) {
            printf("%d ", arr[i]);
        }
    }

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size = 0, choice, i, position, value;

    // Display the menu and ask for user's choice
    do {
        printf("\nMenu:\n");
        printf("1. Create an array\n");
        printf("2. Insert an element\n");
        printf("3. Delete an element\n");
        printf("4. Display the array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Creating an array
                printf("\nEnter the size of the array (max %d): ", MAX_SIZE);
                scanf("%d", &size);

                if (size > MAX_SIZE) {
                    printf("Array size cannot exceed %d.\n", MAX_SIZE);
                    break;
                }

                printf("Enter %d elements:\n", size);
                for (i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                // Inserting an element
                if (size == 0) {
                    printf("\nArray is empty. Please create an array first.\n");
                    break;
                }

                printf("\nEnter the position where you want to insert an element: ");
                scanf("%d", &position);

                if (position < 0 || position > size) {
                    printf("Invalid position.\n");
                    break;
                }

                printf("Enter the value to be inserted: ");
                scanf("%d", &value);

                // Shift the elements to the right
                for (i = size; i > position; i--) {
                    arr[i] = arr[i - 1];
                }

                // Insert the element
                arr[position] = value;
                size++;

                printf("\nElement inserted successfully.\n");
                break;

            case 3:
                // Deleting an element
                if (size == 0) {
                    printf("\nArray is empty. Please create an array first.\n");
                    break;
                }

                printf("\nEnter the position of the element to be deleted: ");
                scanf("%d", &position);

                if (position < 0 || position >= size) {
                    printf("Invalid position.\n");
                    break;
                }

                // Shift the elements to the left
                for (i = position; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                size--;

                printf("\nElement deleted successfully.\n");
                break;

            case 4:
                // Displaying the array
                if (size == 0) {
                    printf("\nArray is empty. Please create an array first.\n");
                    break;
                }

                printf("\nArray elements:\n");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 5:
                // Exiting the program
                printf("\nExiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}

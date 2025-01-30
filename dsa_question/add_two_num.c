// # include <stdio.h>
// void sum_arr(int arr1[],int arr2[],int n){
//     int arr[]={};
//     for(int i=0;i<n;i++){
//         arr[i]=arr1[i]+arr2[i];
//     }
//     return arr;
// }
// int main(){
   
// int arr1[]={1,2,3};
// int arr2[]={4,5,6};
// int n=sizeof(arr1)/sizeof(arr1[0]);

// sum_arr(arr1,arr2,n);

// }

#include <stdio.h>

// Function to calculate the sum of two arrays and store the sums in a new array
void calculateSum(int arr1[], int arr2[], int sum[], int size) {
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    int sum[size]; // New array to store the sums of elements

    // Call the function to calculate the sum
    calculateSum(arr1, arr2, sum, size);

    // Display the sum array
    printf("Sum Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}

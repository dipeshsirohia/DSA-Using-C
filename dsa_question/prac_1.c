// # include <stdio.h>

// int main(){
//     int arr[10]={12,34,23,42,1,3,431,5,9,56};
//      int max=0;
//      int min=1000;
//     //  printf("%d",arr[0]);
//     for(int i=0;i<=9;i++){
//         if(max < arr[i]){
//            max=arr[i];
//         }
//         else{
//             max=max;
//         }
//     }
//        for(int i=0;i<=9;i++){
//         if(min > arr[i]){
//            min=arr[i];
//         }
//         else{
//             min=min;
//         }    
//        }
//      printf("%d   %d",max,min);
//     }


#include <stdio.h>

void findMinMax(int arr[], int size,int *min, int *max) {
    
    if (size <= 0) {
        // Array is empty, return default values
        *min = *max = 0;
        return;
    }
    
    // Initialize min and max with the first element of the array
    *min = *max = arr[0];

    for (int i = 1; i < size; i++) {
        // Update min if a smaller element is found
        if (arr[i] < *min) {
            *min = arr[i];
        }
        
        // Update max if a larger element is found
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 9, 2, 10, 3};
    int size = sizeof(arr)/sizeof (arr[0]) ;

    int min, max;
    findMinMax(arr, size,&min,&max);

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}

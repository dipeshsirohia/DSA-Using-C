// code by me
/*#include <stdio.h>
void selection_sort(int* arr,int n){
     for(int i=0;i<5;i++){
        
        int min = arr[i];
        for(int j=i;j<5;j++){
         

        if(arr[j]<min){
            min=arr[j];
            arr[j]=arr[i];
            arr[i]=min;
        }
        }
        
        printf("%d\n",arr[i]);
        

    }
}
int main(){
    int arr[]={8,0,7,1,3};
    int i;
    for(i=0;i<5;i++){
        
        int min = arr[i];
        for(int j=i;j<5;j++){
         

        if(arr[j]<min){
            min=arr[j];
            arr[j]=arr[i];
            arr[i]=min;
        }
        }
        
        printf("%d\n",arr[i]);
        

    }
    int arrn[]={12,34,2,4,1,5};
    selection_sort(arrn,6);
    
      for (int i = 0; i < 5; i++) {
         printf(" element  %d ", arr[i]);
    }
}*/


// official code
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    selectionSort(arr, n);
    
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

#include <stdio.h>
void printArray(int *A,int n){
     for(int i=0;i<n;i++){
        printf("%d ",A[i]);
     }
     printf("\n");}

void insertion_sort(int *A,int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && key<A[j]){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}     
int main(){
    int A[]={12,334,54,23,56,2,5,67};
    int n=8;
    printArray(A,n);
    insertion_sort(A,n);
    printArray(A,n);

}
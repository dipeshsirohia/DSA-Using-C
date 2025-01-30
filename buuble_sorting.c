# include <stdio.h>
void printArray(int *A,int n){
     for(int i=0;i<n;i++){
        printf("%d ",A[i]);
     }
     printf("\n");
}
void bubbleSort(int *A,int n){
    int issorted=0;
     int temp;
     for(int i=0;i<n-1;i++){
        issorted=1;
        // printf("pass\n"); to check how many passes are require it is option this make sorting adaptive
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            issorted=0;
            }
        }
        if(issorted){
            return;
        }
     }
}
int main(){
    int A[]={12,32,1,23,56,76,89,44};
    // int A[]={1,2,3,4,5,6,7,8};
    int n=8;
    printArray(A,n);
    bubbleSort(A,n);
    printArray(A,n);
}
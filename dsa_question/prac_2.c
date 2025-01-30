# include <stdio.h>

void rev_array(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={12,34,56,789,76,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    rev_array(arr,size);
}
# include <stdio.h>
#include <limits.h>
int choclate(int arr[],int size,int m){
    int minDiff = arr[size - 1];
    for (int i = 0; i + m - 1 <size; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff){
    
         minDiff = diff;
         printf("%d ",arr[i]);
         printf("%d ",arr[i+1]);
         printf("%d \n",arr[i+2]);
        }
        
    }
    return minDiff;
}

int main(){
      int arr[]={1,23,24,34,45,461,561,571,671,692,783};
      int size=sizeof(arr)/sizeof(arr[0]);
      int ans=choclate(arr,size,3) ; 
      printf("%d",ans);     
}
# include <stdio.h>
int max_num(int arr[],int n){
   int max=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            
            }
        }
        return max;
}

int Kth_largest(int arr[],int n,int k){
       int k_max=max_num(arr,n);
       int new_max=k_max;
       for(int i=0;i<n;i++){
           if(k_max==new_max){
            k_max=max_num(arr,n);
       }
     }
}

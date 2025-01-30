# include <stdio.h>
int main(){
    int arr[]={12,32,2,3,45,3,1,7,9};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    int sum=0;
    for(int i=0;i<n;i++){
         sum=sum+i;
         if(sum%k==0){
            printf("the subarray is %d",i+1);
            break;
         }
       for(int j=i;j<n;j++){
          
        for(int k=n;k>=0;k--){
            
        }
       }
    }
}
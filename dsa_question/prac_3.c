# include <stdio.h>
int max_subarray(int arr[],int size){
    int max=0;
    int sum=0;
    for(int i=0;i<size;i++){
      sum=sum+arr[i];
      if(sum>max){
        max=sum;
      }
      if(sum<0){
        sum=0;
      } 
    }
    return max;
}
int main(){
  int arr[]={12,-34,53,-53,12,123,23,45,23,53,533,2};
  int size=12;
 int ans= max_subarray(arr,size);
 printf("%d",ans);
}
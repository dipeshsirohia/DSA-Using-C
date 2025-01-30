# include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int s=1;
    int E=3;
    int sum=0;
    for(int i=s;i<=E;i++){
       sum=sum+arr[i];
    }
    printf("%d",sum);
}
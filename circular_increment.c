# include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    // int size=sizeof(arr)/sizeof(int);
    int size=8;
    for(int i=0;i<size;i++){
        int j=(i+1)%size;
        printf("%d\n",j);
    }
}
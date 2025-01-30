# include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,2,7,6,9};
    int repeated;
    int missing;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(arr[i]==arr[j]){
                repeated=arr[i];
             }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                continue;
            }
            else{
                missing=i-1;
            }
        }
    }

    printf( " the reapeated %d\n",repeated);
    printf("the missing %d\n",missing);
    
}
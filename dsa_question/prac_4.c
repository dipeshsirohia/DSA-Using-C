#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    
    for(int i=0;i<8;i++){
        
        for( int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                printf("true");
            }
        }
        
    }
    printf("false");
    
}
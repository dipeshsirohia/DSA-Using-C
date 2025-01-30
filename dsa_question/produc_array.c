# include <stdio.h>

int main(){
    int arr[]={1,2,3,4};
        int arrnew[4]={};
        int sum;
        
        int length=4;

        for(int i=0;i<length;i++){
            sum=1;
            
            
             for(int j=0;j<length;j++){
                  if(j==i){
                    continue;
                  }
                  else{
                 sum*=arr[j];
                 
                 
                  }

             }
            
            arrnew[i]=sum;
            printf("%d  ",arrnew[i]);
          }

        // for(int i = 0; i < length; i++) {
        //     printf("%d  ",arrnew[i]);
        // }
}
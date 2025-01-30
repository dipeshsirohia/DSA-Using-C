# include <stdio.h>
int main(){
    int arr[]={2,3,1,4,5};
    int max=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}

int new_arr[max];
for(int i=0;i<max;i++){
    new_arr[i]=0;
}
int j;
for(int i=0;i<5;i++){
   j=arr[i];
   new_arr[j]=new_arr[j]+1;
}

for(int i=0;i<max+1;i++){
    printf("%d\t",new_arr[i]);
}

}
#include <stdio.h>
int main(){
    int arr[]={11,2,34,1,35,78,8,90,9,6};
    int max_diff=0;
    int min=arr[0];
    int day; 
    int best_day;
    for(int i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
            day=i+1;
            for(int j=i;j<10;j++){
                int diff=arr[j]-min;
                if(diff>max_diff){
                    max_diff=diff;
                    best_day=j+1;
                }
            }
        }
    }
    printf("the best day to buy stock is %d\n",day);
    printf("the best day to sell stock is %d\n",best_day);
    return 0;
}
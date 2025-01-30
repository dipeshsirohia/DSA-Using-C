# include <stdio.h>
int main(){
    int n;
    printf("enter no. of elements in an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array\n");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements are\n");
    for(int j=0;j<n;j++){
        printf("%d  ",arr[j]);
    }
    printf("enter the element to search\n ");
    int search;
    scanf("%d",&search);
    int f=0;
    for(int k=0;k<n;k++){
    if(arr[k]==search){
        printf("element is found\n");
         f=1;
        break;
    
        
    }
    
     
     

    }
   
    if(f!=1){
        printf("not found!");
    }
      
    return 0;
    }
    


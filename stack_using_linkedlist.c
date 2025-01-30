# include <stdio.h>
# include <stdlib.h>


struct stack{
    int data;
    struct stack * next;
};
struct stack * top=NULL;

// int isempty(struct stack * top){
//      if(top==NULL){
//         return 1;
//      }
// }

void linkedlisttarversal(struct stack* ptr){
    int toel=0;
    while(ptr!=NULL)
    { 
        
     printf("the value is %d\n",ptr->data);
     ptr=ptr->next;
     toel=toel+1;

    }
    printf("the totak no. of elements are : %d ",toel);
}
 
void push(int x){
    struct stack * newnode;
    newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode ->data=x;
    newnode ->next=top;
    top=newnode;
} 

void pop(){
   if(top==NULL){
    printf("stack is empty\n");
   }
   
   struct stack * n=top;
   top=top->next;
   int x=top->data;
   free(n);
   
   
}

int main(){
//    push(5);
//    push(6);
//    push(4);
//    push(7);
//    push(3);
//    push(8);
//    push(2);
//    push(9);
//    push(1);
//    linkedlisttarversal(top);
   pop();
   linkedlisttarversal(top);

   

}


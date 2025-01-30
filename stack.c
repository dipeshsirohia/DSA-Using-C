# include <stdio.h>

struct stack {
    int * arr;
    int size;
    int top;
}; 

int isempty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}

int isfull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}



int main(){
    
    
}
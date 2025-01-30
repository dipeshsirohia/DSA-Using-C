#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int* arr;     
};

int isEmpty(struct queue *q){
    if(q->r==-1 ||q->r==q->f){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enQueue(struct queue *q,int val){
    if(isfull(q)){
        printf("overflow\n");
    }
    else{
         q->r=q->r+1;
         q->arr[q->r]=val;

    }
}

int deQueue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("underflow\n");
    }
    
    else{
         q->f++;
         
         a=q->arr[q->f];
        
    }
    return a;
}


int main(){
    struct queue *q;
    q->f=q->r=-1;
    q->size=100;
    q->arr=(int*)malloc(q->size *sizeof(int));
    enQueue(q,10);
    enQueue(q,10);
    enQueue(q,10);
    if(isEmpty(q)){
        printf("empty\n");
    }
    printf("%d",deQueue(q));
    deQueue(q);
    deQueue(q);


    if(isEmpty(q)){
        printf("empty\n");
    }
    if(isfull(q)){
        printf("full\n");
    }
    
}
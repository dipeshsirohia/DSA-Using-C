#include <stdio.h>
#include <stdlib.h>

struct circularqueue{
    int size;
    int f;
    int r;
    int* arr;     
};

void enQueue(struct circularqueue * q,int val){
    if((q->r+1)%q->size == q->f){
        printf("Queue is full\n");
    }
     
    else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("Element queued : %d\n",val);
    }
}

int deQueue(struct circularqueue *q){
    int val=-1;
    if(q->r==q->f){
        printf("queue is empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        val=q->arr[q->f];
        printf("element deleted\n");


    }
    return val;
}

void printElements(struct circularqueue *q){
    for(int i=1;i<q->size;i++){
        printf("The element is %d\n",q->arr[i]);
    }
}

int main(){
struct circularqueue *q;
    q->f=q->r=0;
    q->size=5;
    q->arr=(int*)malloc(q->size *sizeof(int));

    enQueue(q,1);
    enQueue(q,2);
    enQueue(q,3);
    enQueue(q,4);
    enQueue(q,5);

    

    
    deQueue(q);
    deQueue(q);
    deQueue(q);
    
    deQueue(q);
    deQueue(q);

    enQueue(q,67);
    enQueue(q,6);
    enQueue(q,68);
    enQueue(q,63);



    printElements(q);

}
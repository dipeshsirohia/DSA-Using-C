# include <stdio.h>
# include <stdlib.h>
    struct node *f=NULL;
    struct node *r=NULL;
struct node{
    int data;
    struct node * next;
};

void linkedlisttarversal(struct node* ptr){
    while(ptr!=NULL)
    { 
      printf("elements are:");  
     printf("the value is %d\n",ptr->data);
     ptr=ptr->next;

    }
}

void enqueue(int val){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        printf("Node is empty\n");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}

int dequeue(){
    int val=-1;
    struct node *ptr=f;
    if(f==NULL){
        printf("queue is empty\n");
    }
    else{
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}

int main(){


    enqueue(12);
    enqueue(1);
    enqueue(128);
    enqueue(121);
    linkedlisttarversal(f);
    dequeue();
    linkedlisttarversal(f);



}
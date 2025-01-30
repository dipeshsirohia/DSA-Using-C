# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * insertatfirst(struct node * head,int a){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node ));
    
    ptr->next=head;
    ptr->data=a;
    return ptr;
}

struct node * insertatindex(struct node * head,int a1,int index){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=head;
    ptr->data=a1;
    
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    
    ptr->next=p->next;
    p->next=ptr;
    return head;


}

void traversal(struct node * ptr){
    
    while(ptr!=NULL){
        printf("the value is %d\n",ptr->data);
        ptr=ptr->next;

    }
}


int main(){
   struct node * head; 
   struct node * second;
   struct node * third;
   head=(struct node*)malloc(sizeof(struct node*));
   second=(struct node*)malloc(sizeof(struct node*));
   third=(struct node*)malloc(sizeof(struct node*));

   head->data=10;
   head->next=second;

   second->data=12;
   second->next=third;

   third->data=15;
   third->next=NULL;

   head=insertatindex(head,45,2);
// head=insertatfirst(head,34);
traversal(head);
return 0;
}

# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * insertionAtFirst(struct node * head,int data1){
    
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data1;
    
    return ptr;
}

struct node * insertionAtindex(struct node * head,int data2,int index){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    ptr->data=data2;
    int i=0;
    while(i!=index-1){
        
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;


}
struct node * isertionAtend(struct node * head,int data){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=head;
    
    while(p->next!=NULL){
        p=p->next;
        
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;
    return head;
}
 struct node * insertatafteranode(struct node * head,struct node * node,int deta){
    struct node * ptr;
    
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=deta;
    ptr->next=node->next;
    node->next=ptr;
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

head=(struct node *)malloc(sizeof(struct node *));
second=(struct node *)malloc(sizeof(struct node *));
third=(struct node *)malloc(sizeof(struct node *));

head->data=10;
head->next=second;

second->data=200;
second->next=third;

third->data=190;
third->next=NULL;


// head=insertionAtindex(head,23,2);
// head=isertionAtend(head,67);
head=insertatafteranode(head,second,7);
traversal(head);


    return 0;
}
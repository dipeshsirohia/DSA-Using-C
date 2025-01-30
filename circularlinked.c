# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node * next;
};

struct node * insertatfirstcir(struct node * head,int data){
struct node * ptr;
ptr=(struct node *)malloc(sizeof(struct node *));
ptr->data=data;
   
struct node * p;
p=head->next;   


while(p->next!=head)
    { 
     p=p->next;
     }
    p->next=ptr;     
    ptr->next=head; 
    return ptr;
     
     }

struct node * insertatlastcir(struct node * head,int data){
struct node * ptr;
ptr=(struct node *)malloc(sizeof(struct node *));
ptr->data=data;
   
struct node * p;
p=head->next;   


while(p->next!=head)
    { 
     p=p->next;
     }
    p->next=ptr;     
    ptr->next=head; 
    return head;
     
     }     
    




void linkedlisttarversal(struct node * head){
    struct node* ptr=head;
    while(ptr->next!=head)
    { 
       
     printf("the value is %d\n",ptr->data);
     ptr=ptr->next;
     if(ptr->next==head){
        printf("the value is %d\n",ptr->data);} 
     
     
     }

    }

int main(){
   struct node * head; 
   struct node * second;
   struct node * third;
   struct node * four;
   struct node * five;
   head=(struct node*)malloc(sizeof(struct node*));
   second=(struct node*)malloc(sizeof(struct node*));
   third=(struct node*)malloc(sizeof(struct node*));
   four=(struct node*)malloc(sizeof(struct node*));
   five=(struct node*)malloc(sizeof(struct node*));

   head->data=10;
   head->next=second;

   second->data=12;
   second->next=third;

   third->data=15;
   third->next=four;

   four->data=55;
   four->next=five;

   five->data=19;
   five->next=head;

   head=insertatcir(head,87);
   linkedlisttarversal(head);

} 

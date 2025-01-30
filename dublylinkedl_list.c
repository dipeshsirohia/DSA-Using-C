# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};

void linkedlisttarversal(struct node* ptr){
    while(ptr!=NULL)
    { 
        
     printf("the value is %d\n",ptr->data);
     ptr=ptr->next;

    }
}

void linkedlisttarversalinreverse(struct node * ptr){
while(ptr->next!=NULL){
    ptr=ptr->next;
}
while(ptr->prev!=NULL){
    printf("the value is %d\n",ptr->data);
    ptr=ptr->prev;
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
   head->prev=NULL;

   second->data=12;
   second->next=third;
   second->prev=head;

   third->data=15;
   third->next=four;
   third->prev=second;

   four->data=32;
   four->next=five;
   four->prev=third;

   five->data=122;
   five->next=NULL;
   five->prev=four;

printf("linked list in straight order\n");
linkedlisttarversal(head);
printf("linked list in reverse order\n");
linkedlisttarversalinreverse(head);

} 
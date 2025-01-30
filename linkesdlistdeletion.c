# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * linkedelete(struct node * head){
    struct node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
    
}
struct node * deleteAtindex(struct node * head,int index){
    struct node * p=head;
    struct node * q=p->next;
    

    p->next=q->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    free(q);
    return head;

}

struct node * deleteAtlast(struct node * head){
    struct node * p=head;
    struct node * q=p->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
     p->next=NULL;
    free(q);
    return head;
}

void linkedlisttarversal(struct node* ptr){
    while(ptr!=NULL)
    { 
        
     printf("the value is %d\n",ptr->data);
     ptr=ptr->next;

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
   five->next=NULL;

  head= deleteAtlast(head);
   linkedlisttarversal(head);
   
}
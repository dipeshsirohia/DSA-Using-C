# include <stdio.h>
# include <malloc.h>


struct node{
        int data;
        struct node* left;
        struct node* right;
    };

struct node* createNode(int data){
   struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}

void PreOrder_traversal(struct node* root){
   if(root!=NULL){
    printf("%d  ",root->data);
    PreOrder_traversal(root->left);
    PreOrder_traversal(root->right);
   }
}

void PostOrder_traversal(struct node* root){
   if(root!=NULL){
    PostOrder_traversal(root->left);
    PostOrder_traversal(root->right);
    printf("%d  ",root->data);

   }
}

void InOrder_traversal(struct node* root){
   if(root!=NULL){
    InOrder_traversal(root->left);
    printf("%d  ",root->data);
    InOrder_traversal(root->right);

   }
}

 struct node* search(struct node*root,int key){
   if(root==NULL){
    return NULL;
   }

   else if(root->data==key){
    return root;
   }
   else if(root->data>key){
    return search(root->left,key);
   }
   else if(root->data<key){
    return search(root->right,key);
   }
}

struct node* searchiter(struct node*root,int key){
   while(root!=NULL){
      if(root->data==key){
         return root;
      }
      else if(key>root->data){
          root=root->right;
      }
      else if(key<root->data){
          root=root->left;
      }
   }
   return NULL;
} 

void insert(struct node* root,int key){
   struct node* prev=NULL;
   while(root!=NULL){
      prev=root;
      if(root->data==key){
         return;
      }
      else if(root->data> key){
         root=root->left;
      }
      else{
         root=root->right;
      }

   }

   struct node* new=createNode(key);
   if(key<prev->data){
      prev->left=new;
   }
   else{
      prev->right=new;
   }
}

struct node *inorderPredecessor(struct node *root){
   root=root->left;
   while(root->right!=NULL){
      root=root->right;
   }
   return root;

}

struct node *deleteNode(struct node *root, int value){
   struct node *idpre;
   if(root==NULL){
      return NULL;
   }

   if(root->left==NULL && root->right==NULL){
       free(root);
       return NULL;
   }

   if(value<root->data){
      root->left=deleteNode(root->left,value);
   }
   else if(value>root->data){
      root->right=deleteNode(root->right,value);
   }
   else{
      idpre=inorderPredecessor(root);
      root->data=idpre->data;
      root->left=deleteNode(root->left,idpre->data);
   }
   return root;
} 

int main(){
    struct node* p=createNode(5);
    struct node* p1=createNode(3);
    struct node* p2=createNode(6);
    struct node* p3=createNode(1);
    struct node* p4=createNode(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    // PreOrder_traversal(p);
    // printf("\n");

   //  struct node* value=searchiter(p,3);
   //  printf("%d",value->data);

// insert(p,12);
// insert(p,9);
//  struct node* value=searchiter(p,9);
//  printf("%d",value->data);
   //  PreOrder_traversal(p);
   InOrder_traversal(p);
    printf("\n");
    deleteNode(p,3);
   InOrder_traversal(p);



}
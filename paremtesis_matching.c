# include <stdio.h>
# include <string.h>
int main(){
    int n,c=0;
    char str[100];
    printf("Enter the expression\n");
    scanf("%s",&str);
    printf("%s\n",str);
    size_t length = strlen(str);

    for(int i=0;i<=length;i++){
        if(str[i]=='('){
            
            c=c+1;

        }
        if(str[i]==')'){
            c=c-1;
            if(c==-1){
                // printf("empty\n");
                break;
            }
        }
    }
    if(c==0){
        printf("the parenthesis are balanced\n");
    }
    else{
        printf("the parenthesis are unbalenced\n");
    }
}
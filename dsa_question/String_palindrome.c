#include <stdio.h>
#include <string.h>
#include <ctype.h>



void check_palindrome(char *str){
    
    int length = strlen(str);
    int currentIndex = 0;

    for (int i = 0; i < length; i++) {
        if (isalpha(str[i])) {  
            str[currentIndex] = str[i];
            currentIndex++;
        }
    }


    str[currentIndex] = '\0';
     length = strlen(str);

    for (int i = 0; i<length; i++) {
        str[i] = tolower(str[i]);
    }
    printf("%s\n",str);
    
    length = strlen(str);
    int r=0;
    for(int i=0;i<length/2;i++){
         if(str[i]!=str[length-1-i]){
             printf("the string is not palindrome");
             r =1;
             break;
         }
         
    }
    if(r==0){
          printf("palindrome");
    }
    
}

int main(){
    // char str[]="A man, a plan, a canal: Panama";
    char str[]="qqqqqqq";
    check_palindrome(str);
}
# include <stdio.h>
#include <string.h>


void anagram(char* s,char* t){
  if(strlen(s)!=strlen(t)){
    printf("false");
    return;
  }
  
   
}
int main(){
    
    char s[]="apple";
    char t[]="paplee";
    anagram(s,t);
}

#include<stdio.h>
void main(){
    char userdata;
    printf("Enter character:");
    scanf("%c",&userdata);

    if(userdata>='A' && userdata<='Z'){
        printf("YOU ENTERED UPPERCASE\n");

    }
    else if(userdata>='a' && userdata<='z'){
        printf("YOU ENTERED LOERCASE\n");
       
    }
    else{
        printf("wrong information\n");
    }
   


}
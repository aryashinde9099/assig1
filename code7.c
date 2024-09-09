#include<stdio.h>
void main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);

   if((ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch =='u' ) || (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
    printf("IT IS VOWEL");
   }
   else if((ch>='a' && ch<='z') || (ch>='A'&& ch<='Z')){
    printf("IT IS CONSONANT");
   }
   else{
    printf("WWRONG INFORMATION");
   }
   


}
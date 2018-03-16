#include<stdio.h>
#include"myst.h"

int main(){
char arr[6]={'5','2','3','3','2','1'};
if(ispalindrome(&arr,6)==1)
printf("Palindrome \n");
else
printf("not Palindrome \n");
}

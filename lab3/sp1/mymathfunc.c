#include<stdio.h>

int isequal(int a , int b){
if (a == b) //checking if num are equal
return 1;   //return 1 if num equal
else
return -1;  //return -1 if num are not equal
}

//swapping
void swap(int *a , int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
printf("\n");
printf("%d" , *a);
printf("\n");
printf("%d" , *b);
printf("\n");
}

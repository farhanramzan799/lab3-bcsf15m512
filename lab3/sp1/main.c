#include<stdio.h>
#include"mymath.h"

//calling functions

int main(){
int a;
int b;
printf("enter 1st num : ");
scanf("%d" , &a);
printf("enter 2nd num : ");
scanf("%d" , &b);

if(isequal(a,b)==1)
	printf("Numbers are equal ");
else
	printf("Numbers are not equal ");
swap(&a,&b);
}

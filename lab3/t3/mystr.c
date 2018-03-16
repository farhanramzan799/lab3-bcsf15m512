#include<stdio.h>

int ispalindrome(char *arr, int s){

int a=0;
int max=s-1;
for (int i=0;i<s/2;i++)
{
	if(arr[i]==arr[max])
	{
	a=1;
	max=max-1;
	}
	else
	{
	a=0;
	break;
	}

}
if(a==1)
{
	return 1;	
}
else
	return -1;
}

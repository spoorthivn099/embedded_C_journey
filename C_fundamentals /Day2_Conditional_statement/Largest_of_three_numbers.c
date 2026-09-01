/*
Write a C program to input three numbers and find the largest among them.
*/
#include <stdio.h>
int main()
{
    int a,b,c;
	printf("Enter three Numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c){
	printf("The %d is Largest number\n",a);
	}
	else if(b>=a && b>=c){
	printf("The %d is Largest number\n",b);
	}
	else
	{
	printf("The %d is Largest number\n",c);
	}
	return 0;
}
/*

Enter three Numbers:7
89
10
The 89 is Largest number
*/

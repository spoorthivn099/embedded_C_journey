/*Write a C program to input a number and determine whether it is:
Positive
Negative
Zero
*/
#include <stdio.h>
int main()
{
    int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	if(num > 0){
	printf("The Number is Positive\n");
	}
	else if(num < 0){
	printf("The Number is Negative\n");
	}
	else
	{
	printf("The Number is Zero\n");
	}
	return 0;
}
/*
Output:
Enter the Number:0
The Number is Zero

Enter the Number:7
The Number is Positive

Enter the Number:-9
The Number is Negative
*/

/*
Write a C program to input an integer and check whether it is even or odd.
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	if(num%2==1){
		printf("The Number is Odd");
	}
	if(num%2==0){
		printf("The Number is Even");
	}

	return 0;
}
/*
Output:

Enter the Number:7
The Number is Odd

Enter the Number:2
The Number is Even
*/

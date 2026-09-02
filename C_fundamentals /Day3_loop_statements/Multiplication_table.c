/*
Problem: Take a number from the user and print its multiplication table up to 10.
*/

#include<stdio.h>
int main()
{
    int num,result;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The multiplication Table of entered number is\n" );
	for(int i=1; i<=10; i++)
    {
	result=num *i;
	 printf("%d X %d = %d \n",num,i,result);
    }

    return 0;
}
/*
Enter the number:6
The multiplication Table of entered number is
6 X 1 = 6 
6 X 2 = 12 
6 X 3 = 18 
6 X 4 = 24 
6 X 5 = 30 
6 X 6 = 36 
6 X 7 = 42 
6 X 8 = 48 
6 X 9 = 54 
6 X 10 = 60 
*/
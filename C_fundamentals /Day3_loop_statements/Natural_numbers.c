/*
Problem: Take N from the user and print numbers from 1 to N using a while loop.
*/
#include<stdio.h>
int main()
{
    int N,i=1;
	printf("Enter the number:");
	scanf("%d",&N);
	while(i<=N)
	{
	printf("%d ",i);
	i++;
	}
	return 0;
}

/*
Enter the number:9
1 2 3 4 5 6 7 8 9 
*/	
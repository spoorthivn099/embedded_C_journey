/*
Write a C program to check whether a number is divisible by both 5 and 11.
*/
#include<stdio.h>
int main()
{ 
int num;
printf("Enter the number:");
scanf("%d",&num);
if(num%5==0 && num%11==0)
{
printf("Entered number is divisible by both 5 and 11\n");
}
else
{
printf("Entered number is not divisible by both 5 and 11\n");
}
return 0;
}
/*
Output:
Enter the number:77
Entered number is not divisible by both 5 and 11

Enter the number:110
Entered number is divisible by both 5 and 11

*/


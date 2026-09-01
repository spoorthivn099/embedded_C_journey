/*
Write a C program to input a person's age and check whether they are eligible to vote.
*/

#include<stdio.h>
int main()
{ 
int age;
printf("Enter your age:");
scanf("%d",&age);
if(age >=18){
printf("You are eligible for voting\n");
}
else
{
printf("You are not eligible for voting\n");
}
return 0;
}
/*
Output:
Enter your age:56
You are eligible for voting

Enter your age:13
You are  not eligible for voting
*/



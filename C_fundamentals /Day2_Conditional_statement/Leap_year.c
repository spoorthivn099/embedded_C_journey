/*
Write a C program to input a year and check whether it is a leap year.
*/
#include<stdio.h>
int main()
{ 
int year;
printf("Enter the year:");
scanf("%d",&year);
if(year % 400 == 0||year % 4==0 && year % 100!=0)
{
printf("The year is Leap year");
}
else
{
printf("The year is not Leap year");
}
return 0;
}
/*
Output:
Enter the year:2000
The year is Leap year

Enter the year:1990
The year is not Leap year
*/


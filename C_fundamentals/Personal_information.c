/*Write a C program that stores and displays:

Your name
Age
Height
Grade

Use appropriate data types for each value.*/

#include<stdio.h>
int main()

{
char Name[20];
int Age;
float Height;
char Grade;
printf("Enter your Name:\n");
scanf("%s",Name);
printf("Enter your Age:\n");
scanf("%d",&Age);
printf("Enter your Height:\n");
scanf("%f",&Height);
printf("Enter your Grade:\n");
scanf(" %c", &Grade);
 printf("\nYour Name is %s\n", Name);
 printf("Your Age is %d\n", Age);
 printf("Your Height is %.2f\n", Height);
 printf("Your Grade is %c\n", Grade);

return 0 ;
}
/*
Output:
Enter your Name:
spoorthi
Enter your Age:
23
Enter your Height:
5.6
Enter your Grade:
A

Your Name is spoorthi
Your Age is 23
Your Height is 5.60
Your Grade is A
*/

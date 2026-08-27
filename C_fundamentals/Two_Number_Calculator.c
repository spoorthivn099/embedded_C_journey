/*Write a program that takes two integers from the user and displays:

Addition
Subtraction
Multiplication
Division
Remainder*/

#include<stdio.h>
int main()

{
int a, b ;
int choice;
printf("Enter two numbers :\n");
scanf("%d %d", &a, &b);
printf("Enter the choice : 1.add ,2.sub, 3.MUL,4.Div, 5.Rem\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Addition of entered numbers is %d",a+b);
break;
case 2:
printf("Subtraction of entered numbers is %d", a-b);
break;
case 3:
printf("Multiplication of entered numbers is %d", a*b);
break;
case 4:
printf("Division of entered numbers is %d", a/b);
break;
case 5:
printf("Remainder of entered numbers is %d", a%b);
break;
 default:
     printf("Invalid choice\n");
}

return 0;
}
/* 
Output :

Enter two numbers :
36
2
Enter the choice : 1.add ,2.sub, 3.MUL,4.Div, 5.Rem
4
Division of Entered numbers is 18
*/

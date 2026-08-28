/*
Write a program that accepts temperature in Celsius and converts it to Fahrenheit.
*/

#include<stdio.h>
int main()
{
float Celsius,Fahrenheit
printf("Enter temperature in celsius:");
scanf("%f",&Celsius);
Fahrenheit = (Celsius *9/5)+32;
printf("Fahrenheit is %.1f\n",Fahrenheit);
return 0;
}


/*
output :
Enter temperature in celsius:37
Fahrenheit is 98.6
*/

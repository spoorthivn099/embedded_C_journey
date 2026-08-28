/*Write a program to accept the length and width of a rectangle.
*/

#include<stdio.h>
int main()
{
float length,width;
float area, perimeter ;
printf("Enter Length of Rectangle:");
scanf("%f",&length);
printf("Enter width of Rectangle:");
scanf("%f",&width);
area= length * width;
perimeter= 2*(length + width);
printf("Area of Rectangle is %.1f\n",area);
printf("perimeter of Rectangle is %.1f",perimeter);

return 0;
}
/*
Output:
Enter Length of Rectangle:6
Enter width of Rectangle:7
Area of Rectangle is 42.0
perimeter of Rectangle is 26.0
*/

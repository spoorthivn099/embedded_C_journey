/*
Write a program to check the result of integer division vs floating-point division
*/

#include <stdio.h>
int main()
{
    int a, b;
    float result;
    int X;
	printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    X = a / b;
    result = (float)a / b;
    printf("Integer division is %d\n", X);
    printf("Float division is %f\n", result);
    return 0;
}
/*
Enter the number a: 10
Enter the number b: 5
Integer division is 2
Float division is 2.000000

*/	
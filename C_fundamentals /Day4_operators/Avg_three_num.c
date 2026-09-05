/*
Write a program to calculate the average of three integers.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    int avg;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("The average of three numbers is %d\n", avg);
    return 0;
}

/*
Enter the numbers: 2
2
2
The average of three numbers is 2

*/	
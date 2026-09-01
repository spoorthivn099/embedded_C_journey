/*
Input marks and print the grade using the following conditions:
Marks	Grade
90–100	A
75–89	B
60–74	C
40–59	D
Below 40	Fail*/

#include <stdio.h>

int main()
{
int marks;
printf("Enter your marks: ");
scanf("%d", &marks);

if (marks >= 90 && marks <= 100)
{
    printf("You secured 'A' grade\n");
}
else if (marks >= 75 && marks <= 89)
{
    printf("You secured 'B' grade\n");
}
else if (marks >= 60 && marks <= 74)
{
    printf("You secured 'C' grade\n");
}
else if (marks >= 40 && marks <= 59)
{
    printf("You secured 'D' grade\n");
}
else
{
    printf("You failed\n");
}

return 0;

}


/*
Output:
Enter your marks: 97
You secured 'A' grade

Enter your marks: 50
You secured 'D' grade

Enter your marks: 39
You failed
*/





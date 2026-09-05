/*
Write a program to convert a total number of seconds into hours, minutes, and seconds.
*/

#include <stdio.h>

int main()
{
    int totalsec,hours,minutes,seconds,remain;
	
    printf("Enter the total seconds: ");
    scanf("%d",&totalsec);
	
    hours = totalsec/3600;
	remain = totalsec%3600;
	minutes = remain/60;
	seconds = remain %60;
	
    printf("%d Hours %d minutes %d seconds \n",hours,minutes,seconds);
	
    return 0;
}

/*
Enter the total seconds: 3665
1 Hours 1 minutes 5 seconds 

*/	
/*
Write a C program to input a character and determine whether it is:

Uppercase alphabet
Lowercase alphabet
Digit
Special character
*/

#include<stdio.h>
int main()
{ 
char character;
printf("Enter the character:");
scanf("%c",&character);
if(character >= 'A'&& character <= 'Z')
{
printf("The character is Uppercase Alphabet\n");
}
else if(character >= 'a' && character <= 'z')

{
printf("The character is Lowercase Alphabet\n");
}

else if(character >= '0' && character <= '9'){
printf("The character is Digit\n");
}
else
{
printf("The character is Special Character\n");
}
return 0;
}
/*
Enter the character:/
The character is Special Character

Enter the character:G
The character is Uppercase Alphabet

Enter the character:h
The character is Lowercase Alphabet

Enter the character:9
The character is Digit
*/

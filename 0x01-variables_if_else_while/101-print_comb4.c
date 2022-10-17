#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;
	int num1;
	int num2;

	for (num = 48; num <= 57 ; num++)
	{
		for (num1 = num + 1 ; num1 <= 57 ; num1++)
		{
			for (num2 = num1 + 1 ; num2 <= 57 ; num2++)
			{
				putchar (num);
				putchar (num1);
				putchar (num2);
				if (num == 55 && num1 == 56 && num2 == 57)
				{
					putchar ('\n');
					break;
				}
				putchar (',');
				putchar (' ');
			}
		}
	}
	return (0);
}

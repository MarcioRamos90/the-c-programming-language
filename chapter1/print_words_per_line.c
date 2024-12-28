#include<stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n')
		{
			printf("\n");
		}
		else
		{
			putchar(c);
		}
	}
}

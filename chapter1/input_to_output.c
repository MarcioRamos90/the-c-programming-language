#include<stdio.h>

void main()
{
	int c;
	//while ((c = getchar()) != EOF)
	while (1)
	{
		c = getchar();
		printf("%c = %d\n", c, c);
		if (c == EOF)
		{
			break;
		}
	}
}

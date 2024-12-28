#include <stdio.h>

#define MAXCHARS 500

void main()
{
    char charcount[MAXCHARS], character;

    for (int i = 0; i < MAXCHARS; i++)
    {
	charcount[i] = 0;
    }

    while ((character = getchar()) != EOF)
    {
	++charcount[character];
    }

    for (int i = 0; i < MAXCHARS; ++i)
    {
	char c = charcount[i];
	if (c > 0)
	{
	    if (i == '\n')
	    {
		printf("\\n");
	    }
	    else if (i == 9)
	    {
		printf("\\t");
	    }
	    else
	    {
		putchar(' ');
		putchar(i);
	    }
	    printf(":");
	    for (int i = 0; i < c;++i)
	    {
		putchar('#');
	    }
	    printf("\n");
	}
    }
}

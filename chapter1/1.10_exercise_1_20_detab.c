#include<stdio.h>

#define SPACESPERTAB 4
#define MAXLEN 5000

int idx;

void main()
{
    char str[MAXLEN], c;
    
    while((c = getchar()) != EOF)
    {
	if(c == '\t')
	{
	    for(int i = 0; i < SPACESPERTAB; i++)
	    {
		str[idx++] = ' ';
	    }
	}
	else
	{
	    str[idx++] = c;
	}
    }

    printf("%s", str);
}

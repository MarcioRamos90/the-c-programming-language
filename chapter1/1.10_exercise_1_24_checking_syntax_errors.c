#include<stdio.h>

#define MAXLEN 50000
void LogError(int col, int line)
{
    printf("error at column %d line %d", col, line);
}
void main()
{
    char c;
    char str[MAXLEN];

    for (int i = 0; i < MAXLEN; i++)
    {
	str[i] = '\0';
    }

    int i = 0;
    int line = 1;
    int col = 0;
    char prev = '\0';
    short isChar = 0;

    while((c = getchar()) != EOF)
    {

	col++;
	if (c == '\n')
	{
	    line++;
	    col = 0;
	}
	
	if (c == '\'' && isChar == 0)
	{
	    isChar = 1;
	}
	else if (c == '\'' && isChar == 1 && prev != '\\')
	{
	    isChar = 0;
	}
	if (isChar == 0)
	{
	    if (c == '(')
	    {
		str[i++] = c;
		continue;
	    }
	    else if (c == ')') 
	    {
		if (str[i-1] == '(') {
		    // success
		    str[--i] = '\0';
		    continue;
		}
		else
		{
		    // error
		    LogError(col, line);
		    return;
		}
	    }
	    else if (c == '{')
	    {
		str[i++] = c;
	    }
	    else if (c == '}')
	    {
		if (str[i-1] != '{')
		{
		    // error
		    LogError(col, line);
		    return;
		}
		else
		{
		    // success
		    str[--i] = '\0';
		    continue;
		}
  	    }
	}
	prev = c;
    }
    if (i > 0)
    {
	LogError(col, line);
    }
    else
    {
	printf("ohh your code is nice!");
    }
}

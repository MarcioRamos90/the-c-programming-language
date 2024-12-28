#include <stdio.h>

#define MAXSTR 50

void reverse(char *str)
{
    char reversed[MAXSTR], temp[MAXSTR];
    int strcount = 0;

    for (int i = 0; i < MAXSTR; i++)
    {
	if (str[i] == '\0')
	{
	    break;
	}
	temp[i] = str[i];
	strcount++;
    }

    for (int i = 0; i <= strcount; i++)
    {
	str[i] = temp[strcount - i - 1];
    }
}

int main ()
{
    char str[MAXSTR], c;
    int i = 0;

    for (int j = 0; j < MAXSTR; j++)
    {
	str[j] = '\0';
    }
    while ((c = getchar()) != EOF)
    {
	if (c == '\n')
	{
	    i = 0;
	    break;
	}
	str[i++] = c;
    }
    reverse(str);
    printf("%s \n", str);
}

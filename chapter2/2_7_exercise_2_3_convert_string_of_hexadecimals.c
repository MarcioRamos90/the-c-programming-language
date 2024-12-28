#include<stdio.h>
#include<math.h>

#define MAXLINE 500

int hexlen(char * hex)
{
    int i;
    char c;
    for (i = 0; (c = hex[i]) != '\0'; i++)
    {}
    return i;
}

int htoi(char * hex, int hlen) {
    int i;
    int r = 0;
    char c;
    int n = 0;
    for(i = 0; (c = hex[i]) != '\0'; i++)
    {
	if (c >= '0' && c <= '9')
	{
	    n = c - '0';
	}


	if (c >= 'a' && c <= 'f')
	{
	    n = (c - 'a') +  10;
	}

	r += pow(16, --hlen) * n;
    }

    return r;
}

void main()
{

    char hex[MAXLINE];

    for (int i = 0; i < MAXLINE; i++)
    {
	hex[i] = '\0';
    }

    char c;
    int i = 0;

    while((c = getchar()) != '\n')
    {
	if (c != '\n')
	{
	    hex[i++] = c;
	}
	else if (c == '\0')
	{
	    return;
	}
    }

    if (hex[0] == '\0')
    {
	printf("outing");
	return;
    }

    int hlen = hexlen(hex);
    int res = htoi(hex, hlen);

    printf("%d", res);
}

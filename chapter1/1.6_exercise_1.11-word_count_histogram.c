#include <stdio.h>

#define MAXLINES 200
#define MAXLEN 50

void main()
{
    char c, wordstore[MAXLINES][MAXLEN], w[MAXLEN];
    int wordcount[MAXLINES];
    for(int i = 0; i < MAXLINES; i++)
    {
	wordcount[i] = 0;
	w[i] = 0;
	for (int j = 0; j < MAXLEN; j++)
	{
	    wordstore[i][j] = 0;
	}
    }

    int i = 0;
    int position = 0;
    int sum = 0;

    while ((c = getchar()) != EOF)
    {
	if (c == ' ' || c == '\n' || c == '\t')
	{
	    sum = 0;
	    position = 0;
	    for (int idx = 0; idx < MAXLEN; ++idx)
	    {	
		sum += w[idx];
	    }
	    position = sum % MAXLINES;
	    ++wordcount[position];
	    for (int idx = 0; idx < MAXLEN; idx++)
	    {
		wordstore[position][idx] = w[idx];
		w[idx] = 0;
	    }
	    i = 0;
	}
	else
	{
	    w[++i] = c;
	}
    }
    
    for (i = 0; i < MAXLINES; ++i) {
	int wlen = 0;
	for(int j=0; j < sizeof(wordstore[i]); j++)
	{
	    if (wordstore[i][j] > 0)
	    {
		putchar(wordstore[i][j]);
		wlen++;
	    }
	}
	if (wordcount[i] > 0)
	{
	    int nt = 4 - (wlen / 8);
	    for (int t = 0; t < nt; t++)
	    {
		putchar('\t');
	    }
	    for (int idx = 0; idx < wordcount[i]; idx++)
	    {
		printf("#");
	    }
	    putchar('\n');
	}
    }
}


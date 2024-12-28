#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
	float cel, fahr;

	cel = LOWER;
	printf("Cel   Fahr\n");
	while(cel <= UPPER)
	{
		fahr = (9.0/5.0) * cel + 32;
		printf("%3.0f %6.0f\n", cel, fahr);
		cel += STEP;
	}
}

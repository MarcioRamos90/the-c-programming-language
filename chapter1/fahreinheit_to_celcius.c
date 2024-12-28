#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenhei-Celsius table
 *  for fahr = 0, 20, ..., 300 */
int main()
{
  float fahr, celsius;

  fahr = LOWER;
  printf("Fahr    Cel\n");
  while (fahr <= UPPER)
  {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%4.0f %6.2f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}

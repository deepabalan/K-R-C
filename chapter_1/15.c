/* Rewrite the temperature conversion program of Section 1.2 to use a
 * a function for conversion */


#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

float temp_FtoC(float fahr);

main()
{
	int i;

	for (i = LOWER; i <= UPPER; i = i + STEP)
		printf("%d%9.1f\n", i, temp_FtoC(i));
	return 0;
}

float temp_FtoC(float fahr)
{
	float celsius;

	celsius = (5.0 / 9.0)*(fahr - 32.0);
	return celsius;
}

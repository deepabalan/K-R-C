/* Modify the temperature conversion program to print a heading above the
   table (faherheit to celsius) */


#include <stdio.h>
main()
{
	float celsius, fahr;

	// print conversion table
        printf("\nFahrenheit | celsius \n");

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
                printf("----------------------\n");
		printf("|%10.2f|%9.2f|\n", fahr, celsius);
	}
        printf("----------------------\n");
}

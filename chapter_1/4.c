/* Write a program to print the corresponding celsius to fahrneheit table. */


#include <stdio.h>
main()
{
	float fahr, celsius;

	//print the conversion table

	printf("\nCelsius | Fahrenheit\n");

	for (celsius = 0; celsius <= 300; celsius = celsius + 20)
	{
		printf("-------------------\n");
		fahr = (9.0/5.0)* celsius + 32.0;
		printf("|%7.2f|%9.2f|\n", celsius, fahr);
	}
	printf("-------------------\n");
}

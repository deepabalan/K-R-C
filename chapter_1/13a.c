/* Write a program to print a histogram of the lengths of words in its 
   input. It is easy to draw the histogram with the bars horizontal.*/


#include <stdio.h>
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			printf("\n");
		else
			putchar('*');
	}
}

/* Write a program to print a histogram of the frequencies of different
 * characters in its input */

#include <stdio.h>
main()
{
	int i, c;
	int letter[26];

	for (i = 0; i < 26; ++i)
		letter[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90)
			++letter[c - 65];
		else if (c >= 97 && c <= 122)
			++letter[c - 97];
	}

	printf("Frequency of characters:\n");
	for (i = 0; i < 26; ++i) {
		printf("%c%6d\t", 65 + i, letter[i]);
		while (letter[i] > 0) { 
			printf("*");
			--letter[i];
		}
		printf("\n");
	}	
}

/* Write a program to print a histogram of the frequencies of different
 * characters in its input */

#include <stdio.h>
#define MAXHIST 30
#define MAXCHAR 26
main()
{
	int i, c, j, maxvalue, ovflow;
	int letter[MAXCHAR];

	maxvalue = ovflow = 0;

	for (i = 0; i < MAXCHAR; ++i)
		letter[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 65 && c <= 90)
			++letter[c - 65];
		else if (c >= 97 && c <= 122)
			++letter[c - 97];
	}
	for (i = 0; i < MAXCHAR; ++i) {
		if (letter[i] > maxvalue)
			maxvalue = letter[i];
	}
	for (i = MAXHIST; i > 0; --i) {
		for (j = 0; j < MAXCHAR; ++j) {
			if (letter[j] * MAXHIST / maxvalue >= i)
				printf(" * ");
			else
				printf("   ");
		}
		putchar('\n');
	}
	for (i = 0; i < MAXCHAR; ++i)
		printf("%2c ", 65 + i);
	putchar('\n');
	for (i = 0; i < MAXCHAR; ++i)
		printf("%2d ", letter[i]);
	putchar('\n');
	if (ovflow > 0)
		printf("There are %d letters >= %d\n", ovflow, MAXCHAR);
}

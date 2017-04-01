/* Write a program to copy its input to its output, replacing each string of
   one or more blanks by a single blank. */


#include <stdio.h>
#define IN  1        // blank count set to 1
#define OUT 0        // blank count set to 0

main()
{
	int c, state;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && state == OUT) {
			state = IN;
			putchar(c);
		}
		if (c != ' ') {
			state = OUT;
			putchar(c);
		}
	}
}

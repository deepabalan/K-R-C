/* Write a program to print a histogram of the lengths of words in its 
   input. A vertical orientation is more challenging.*/


#include <stdio.h>
#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

main()
{
	int i, j, c, nc, state;
	int ovflow;
	int wl[MAXWORD];

	nc = 0;
	state = OUT;
	ovflow = 0;

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0) {
				if (nc < MAXWORD)
					++wl[nc];
				else
					++ovflow;
			}
			nc = 0;
		} else if (state == OUT) {
			state = IN;
			nc = 1;
		}
		else
			++nc;
	}
	for (i = MAXHIST; i > 0; --i) {
		for (j = 1; j < MAXWORD; ++j) {
			if (wl[j] >= i) {
				printf(" * ");
			} else
				printf("   ");
		}
		putchar('\n');
	} 
	for (i = 1; i < MAXWORD; ++i)
		printf("%2d ", i);
	putchar('\n');
	for (i = 1; i < MAXWORD; ++i)
		printf("%2d ", wl[i]);
	putchar('\n');
	if (ovflow > 0)
		printf("overflow = %d\n", ovflow);
}

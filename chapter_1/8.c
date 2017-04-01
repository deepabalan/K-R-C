/* Write a program to count blanks, tabs, and newlines. 
 * after compiling use: 'echo "your_string" | ./a.out' 
 * send EOF by pressing Ctrl+D. */

#include <stdio.h>
#define IN 1
#define OUT 0
main()
{
	int c;
	int bl, tl, nl;
	int state, lastc;

	bl = 0;
	tl = 0;
	nl = 0;
	lastc = 0;
	state = OUT;

	while (state == OUT) {
		c = getchar();
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tl;
		if (c == '\n')
			++nl;
		if (c == EOF) {
			if (lastc != '\n')
				++nl;
			state = IN;
		}
		lastc = c;
	}
	printf("blank = %d\n tab = %d\n newline = %d\n", bl, tl, nl);
}

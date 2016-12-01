/* Write a program to count blanks, tabs, and newlines. */
/* after compiling use: 'echo "your_string" | ./a.out' */
/* send EOF by pressing Ctrl+D. */

#include <stdio.h>
main()
{
	int c, bl, tl, nl;

	bl = 0;
	tl = 0;
	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tl;
		if (c == '\n')
			++nl;
	}
	printf("blank = %d\n tab = %d\n newline = %d\n", bl, tl, nl);
}

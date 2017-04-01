// Replace multiple blanks with single blank


#include <stdio.h>
main()
{
	int c, blank_count;
	blank_count = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++blank_count;
			if (blank_count < 2) {
				putchar(c);
			}
		}
		if (c != ' ') {
			blank_count = 0;
			putchar(c);
		}
	}
}

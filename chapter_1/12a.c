// Another solution for Ex.12.

#include <stdio.h>
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c != ' ' || c != '\t' || c != '\n')
			putchar(c);
		if (c == ' ')
			putchar('\n');
	}
}

/* Write a program to print all input lines that are longer than 80 
   characters */


#include <stdio.h>
#define MAXLINE 1000                /* maximum size of line */
#define MAX 30

int my_getline(char line[], int maxline);

main()
{
	int len;
	char line[MAXLINE];

	while ((len = my_getline(line, MAXLINE)) > 0) {
		if (len > MAX) {
			printf("%s", line);
		}
	}
	return 0;
}
int my_getline(char s[], int lim)
{
	int i, c;

	for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

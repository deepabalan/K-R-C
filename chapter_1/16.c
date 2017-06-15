/* Revise the main routine of the longest-line program so it will
 * correctly print the length of arbitrarily long input lines, and as
 * much as possible of the text. */


#include <stdio.h>
#define MAXLINE 10

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int c;
	int len;                      // current line length
	int max = 0;                  // maximum length seen so far
	char line[MAXLINE];           // current input line
	char longest[MAXLINE];        // longest line encountered saved in this array

	while ((len = my_getline(line, MAXLINE)) > 0) {
		if (line[len-1] != '\n') {
//			printf("hello\n");
			while ((c = getchar()) != EOF && c != '\n')
				++len;
		}
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("\nlongest line with %d characters\n", max);
		printf("%s ... \n", longest);
	return 0;
}
int my_getline(char s[], int lim)
{
	int i, c;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

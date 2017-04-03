/* Write a program to print a histogram of the lengths of words in its 
   input. It is easy to draw the histogram with the bars horizontal.*/


#include <stdio.h>
#define MAX 10
main()
{
	int c, i, nc;
	int word_len[MAX];
	nc = 0;

	for (i = 0; i < MAX; ++i)
		word_len[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			++nc;
		}
		else if (nc > 0) {
			++word_len[nc];
			nc = 0;
		}
	}
	printf("histogram of lengths of word:\n");
	printf("WORD_LENGTH\tFREQUENCY\n");
	for (i = 0; i < MAX; ++i) {
		printf("%d%9d\t", i, word_len[i]);
		while (word_len[i] > 0) {
			printf("*");
			--word_len[i];
		}
		printf("\n");
	}
}

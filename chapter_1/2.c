/* Experiment to find out what happens when printf's argument string contains
   \c, where c is some character not list above. */


#include <stdio.h>
main()
{
	printf("Hello, world\n\s");
}

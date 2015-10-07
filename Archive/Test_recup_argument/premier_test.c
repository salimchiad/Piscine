#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	    long i;

		    for (i=0; i < argc; i++)
				    {
						        printf("Argument %ld : %s \n", i+1, argv[i]);
								    }

			    getchar();
				    return EXIT_SUCCESS;
}


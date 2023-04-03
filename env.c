#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

extern char** environ;

void main(void)
{
	char **addr = environ;
	while(*addr)
	{
		printf("%s\n",*(addr));
		addr++;
	}
	exit(0);
}
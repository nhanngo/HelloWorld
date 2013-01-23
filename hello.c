#include <stdio.h>
#include <ctype.h>
#include <string.h>

static char* trim(char* p)
{
	while ( isspace(*p) )  p++;
	return p;
}

int main(int argc, char* argv[])
{
	printf("Hello world \n");
	return 0;
}

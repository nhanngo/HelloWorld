#include <stdio.h>
#include <ctype.h>
#include <string.h>

static char* trim(char* p)
{
	while ( isspace(*p) )  p++;
	int len = strlen(p);
	while ( isspace(p[len - 1])) len--;
	p[len] = '\0';
	return p;
}

int main(int argc, char* argv[])
{
	printf("Hello world \n");
	return 0;
}

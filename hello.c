#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/* this is function pointer passed to inbuilt sort function */
typedef int (*compare_num)(int a, int b);

/* implemnt mrt for May 2018 - verify user */
bool checkuser(int userid);

int cmp(const void *a, const void  *b) 
{
  return ( *(int*)a - *(int*)b );
}

static char* trim(char* p)
{
  while ( isspace(*p) )  p++;
  int len = strlen(p);

  while ( isspace(p[len - 1])) len--;
  p[len] = '\0';
  return p;
}

static void printtest(char *p)
{
  printf("bullshit");
}

int mystrlen(char *p)
{
  return strlen(p);
}


bool checkuser(int userid) 
{
	bool ret = false;
	
	if (userid > 100) {
		ret = true;
	}
	
	return ret;
}


int main(int argc, char* argv[])
{
  printf("Hello world \n");
  
  char p[] = " Mr Big ";
  printf("\"%s\"\n", trim(p));

  int data[5] = {3,5,3,91,14};

  for (int i = 0; i < 5; i++ ) {
    printf("%d ", data[i]);
  }
  printf("\n");


  qsort(data, 5, sizeof(int), cmp);

  for (int i = 0; i < 5; i++ ) {
    printf("%d ", data[i]);
  }
  printf("\n");

  return 0;
}

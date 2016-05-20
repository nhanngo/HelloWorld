#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef int (*compare_num)(int a, int b);

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

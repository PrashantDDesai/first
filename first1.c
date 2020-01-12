#include<stdio.h>
int mystrcmp(connst *char, const *char)
void main()
{
  char str1[100],str2[100];
  printf("Enter string 1: \n");
  gets(str1);
  printf("Enter string 2: \n");
  gets(str2);
  printf("You entered following strings: \n");
  puts(str1);
  printf("\n");
  puts(str2);
  return 0;
}

int mystrcmp(const char *a, const char *b)
{
  while(*a==*b && *a!='\0' && *b!='\0')
  {
    a++;
    b++;
  }
  if(a==b)
  {
    return 0;
  }
  else
    return *a-*b;
}

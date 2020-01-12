//string comparing function
#include<stdio.h>
int mystrcmp(const char *, const char *);
int main()
{
  char str1[100],str2[100];
  int i;
  printf("Enter string 1: \n");
  gets(str1);
  printf("Enter string 2: \n");
  gets(str2);
  printf("You entered following strings: \n");
  puts(str1);
  printf("\n");
  puts(str2);
  printf("\n");
  printf("checking if the strings are same...\n\n");
  i=mystrcmp(str1,str2);
  if(i==0)
  {
      printf("Strings are same.\n");
  }
  else
  {
      printf("Strings are differnt.\n");
  }
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

#include<stdio.h>
void main()
{
  char *str1,*str2;
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

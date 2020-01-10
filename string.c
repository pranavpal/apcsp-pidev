#include <stdio.h>
#include <string.h>

int main()
{

  char string1[] = "abcdefghijklmnopqrstuvwxyz";
  char string2[27];

  for(int i = 0; i < 26; i++)
  {
    string2[i] = 'a' + i;
  }

  string2[26] = '\0';

  if (strcmp(string1, string2) == 0)
    printf("The two strings are the same\n");
  else
    printf("The two strings are not the same\n");

  for(int i = 0; i < 26; i++)
  {
  string2[i] = 'A' + i;
  }

  if (strcmp(string1, string2) == 0)
    printf("The two new strings are the same\n");
  else
    printf("The two new strings are not the same\n");

  char string3[100];

  strcpy(string3, string1);
  strcat(string3, string2);
  printf("String 1: %s\nString 2: %s\nString 3: %s\n", string1, string2, string3);


  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*All constant definitions*/
#define MAX    32

/**Declaration of string concatination function**/
void s_concat(char str1[MAX + 1], char str2[MAX + 1]);

/**Main function starts here**/
int main()
{
/**Declaration of variables**/
  char str1[MAX + 1], str2[MAX + 1];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  s_concat(str1, str2); /*Calling string concat function*/
  printf("The concatination of given strings is: %s\n", str1);
  return 0;
}

/**String concat function starts here**/
void s_concat(char str1[MAX + 1], char str2[MAX + 1])
{
/*Declaration of variables*/
  int i, len;
  i = 0;/*Initialization*/

  if (str1[0] == '\0' && str2[0] == '\0')
  {
      printf("Invalid input\n");
      exit (0);
  }

  while (str1[i] != '\0')
  {
      i++;
  }

  len = i;
  i = 0;
    
  while (str2[i] != '\0')
  {
      str1[len] = str2[i];
      i++;
      len++;
  }
  str1[len] = '\0';
  return;
}

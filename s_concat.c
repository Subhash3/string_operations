#include <stdio.h>
#include <stdlib.h>

/*All Constant definitions*/
#define MAX  32

/**Declaration of string concat function**/
void s_concat(char str1[MAX + 1], char str2[MAX + 1], char final_str[MAX + 1]);

/**Main function starts here**/
int main()
{
  /**Declaration variables**/
  char str1[MAX + 1], str2[MAX + 1], final_str[MAX + 1];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  s_concat(str1, str2, final_str);/*Calling string concat function*/
  printf("Resultant string is: %s\n", final_str);
}

/*String concat function starts here*/
void s_concat(char str1[MAX + 1], char str2[MAX + 1], char final_str[MAX + 1])
{
/**Declaration of variables**/
  int i, j;

/**Initialization of variables**/
  i = 0;
  j = 0;

  if (str1[i] == '\0' && str2[j] == '\0')
  {
      printf("Invalid input\n");
      exit (0);
  }

  while (str1[i] != '\0')
  {
      final_str[i] = str1[i];
      i++;
  }

  while (str2[j] != '\0')
  {
      final_str[i] = str2[j];
      i++;
      j++;
  }

  final_str[i] = '\0';
  return;
}


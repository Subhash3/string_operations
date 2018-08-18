#include <stdio.h>
#include <stdlib.h>

/**All constant defintions**/
#define MAX  32

int s_len(char string[MAX + 1]); /**Declaration of string length function**/

/**Main function starts here**/
int main()
{
/**Declaration of variables**/
  char string[MAX + 1];
  int len;
  len = 0;/*Initialization*/

  printf("Enter a string: ");
  scanf("%s", string);
  
  len = s_len(string);/*Calling string length funtion*/
  printf("Length of the string you entered is:%d\n", len);
  return 0;
}

int s_len(char string[MAX + 1])
{
/**Declaration of variables**/	
  int i;
  i = 0; /*Initialization*/

  if (string[i] == '\0')
  {
      printf("You entered an empty string.\n");
      return 0;
  }

  while (string[i] != '\0')
  {
      i++;
  }
  return i;
}

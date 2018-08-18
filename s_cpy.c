#include <stdio.h>
#include <stdlib.h>

/**All constant definitions**/
#define  MAX    32

/**Function declaration**/
void s_cpy(char src[MAX + 1], char dest[MAX + 1]);

/**Main function starts here**/
int main()
{
  /**Declaration of strings**/
  char src[MAX + 1], dest[MAX + 1];

  printf("Enter a string:");
  scanf("%s", src);

  s_cpy(src, dest); /**Calling string copy function**/
  printf("The destination string is: %s\n", dest);
  return 0;
}

/**String copy function starts here**/
void s_cpy(char src[MAX + 1], char dest[MAX + 1])
{
/**Declaration of variables**/
  int i;
  
/**Empty string condition**/
  if (src[0] == '\0')
  {
      printf("No input has been given\n");
      exit (0);
  }

  i = 0; /**Initialization**/
  while (src[i] != '\0')
  {
      dest[i] = src[i];
      i++;
  }
  dest[i] = '\0'; /**Assaigning End Of String to destination string**/
  return;
}

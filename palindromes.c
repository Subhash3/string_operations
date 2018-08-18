#include<stdio.h>
#include <stdlib.h>

/*All constant defintions*/
#define  MAX    32

/**Function Declarations**/
void s_reverse(char string[MAX + 1], char reverse[MAX + 1]);
int s_compare(char str1[MAX + 1], char str2[MAX + 1]);

/**Main function starts here**/
int main()
{
/**Declaration of variables**/
  char  string[MAX + 1], reverse[MAX + 1];
  int ret_stat;

  printf("Enter a string:");
  scanf("%s", string);

  s_reverse(string, reverse); /*Calling string reverse function*/
  ret_stat = s_compare(string, reverse); /*Calling string compare function*/

  if (ret_stat == 0)
  {
      printf("Given string is a palindrome.\n");
      return 0;
  }
  else if (ret_stat == 1)
  {
      printf("Given string is not a palindrome.\n");
      return 1;
  }
  return 0;  
}

/**String reverse function starts here**/
void s_reverse(char string[MAX + 1], char reverse[MAX + 1]) 
{
/*Declaration of variables*/	
  int i, len;

/*Empty string checking*/
  if (string[0] == '\0')
  {
      printf("No name has been entered.\n");
      return ;
  }
  
  i = 0;/*Initialization*/

  while(string[i] != '\0')
  {
      i++;
  }
  len = i;
  
  for (i = 0; i < len; i++)
  {
      reverse[len -1 -i] = string[i];
  }
  reverse[len] = '\0';
  return;

}

/**String compare function starts here**/
int s_compare(char str1[MAX + 1], char str2[MAX + 1])
{
/*Declration of variables*/
    int i;
    i = 0;/*Initialization*/

    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 1;
        }
            i++;
    }
    return 0;

}

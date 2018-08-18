#include <stdio.h>
#include <stdlib.h>

/**All constant definitions**/
#define MAX   32

/**Declaration of the function String compare**/
void s_compare(char str1[MAX + 1], char str2[MAX + 1]);

/**Main function starts here**/
int main()
{
/*Declaration of Variables*/
  char str1[MAX + 1], str2[MAX + 2];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);
  
  s_compare(str1, str2); /*Calling string compare function*/
  return 0;
}

/**String compare function starts here**/
void s_compare(char str1[MAX + 1], char str2[MAX + 1])
{
/**Declaration of variables**/
    int i, len1, len2;
    /*Initialization*/
    i = 0;
    len1 = 0;
    len2 = 0;

    while (str1[i] != '\0')
    {
        i++;
    }
    
    len1 = i;
    i = 0;

    while (str2[i] != '\0')
    {
        i++;
    }
    len2 = i;
    i = 0;

    if (len1 == len2)
    {
        while (str1[i] != '\0')
        {
            if (str1[i] != str2[i])
            {
                printf("Given strings are not equal.\n");
                return;
            }
            i++;
        }
        printf("Given strings are equal.\n");
        return;
    }
    else
    {
        printf("Given strings are not equal.\n");
        return;
    }


}

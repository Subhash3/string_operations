#include <stdio.h>
#include <stdlib.h>

/*All Constant definitions*/
#define  MAX    32

/*Function declaration*/
void str_copy(char src[MAX + 1], char dest[MAX + 1]);

/**Main function starts here**/

int main()
{
    char src[MAX + 1], dest[MAX + 1]; /***Declaration of strings*/

    printf("Enter a string : ");
    scanf("%s",src);

    str_copy(src, dest);  /*Calling string copy function*/
    printf("Destination string is %s\n", dest);
    return 0;

}
/**String copy function starts here.**/

void str_copy(char src[MAX + 1],char dest[MAX + 1])
{
/*Declaration of variable*/
    int i;

    i = 0; /*Initialization*/
    
    /*Empty string condition*/

    if (src[i] == '\0')
    {
        printf("No input has been given\n");
        exit (0);
    }

    for(i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    
    return ;
}

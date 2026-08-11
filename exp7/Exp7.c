#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0;
    int zeros = 0;
    int ones = 0;
    int valid = 1;

    printf("Enter the string: ");
    scanf("%s", str);

    /* Count zeros at the beginning */
    while (str[i] == '0')
    {
        zeros++;
        i++;
    }

    /* Count ones after zeros */
    while (str[i] == '1')
    {
        ones++;
        i++;
    }

    /* Check if all characters were processed */
    if (str[i] != '\0')
    {
        valid = 0;
    }

    /* Number of zeros and ones must be equal */
    if (zeros != ones)
    {
        valid = 0;
    }

    if (valid == 1)
    {
        printf("String belongs to the grammar.\n");
    }
    else
    {
        printf("String does NOT belong to the grammar.\n");
    }

    return 0;
}

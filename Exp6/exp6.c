#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0;
    int startZeros = 0;
    int ones = 0;
    int endZeros = 0;
    int valid = 1;

    printf("Enter the string: ");
    scanf("%s", str);

    /* Count zeros at the beginning */
    while (str[i] == '0')
    {
        startZeros++;
        i++;
    }

    /* Count ones in the middle */
    while (str[i] == '1')
    {
        ones++;
        i++;
    }

    /* Count zeros at the end */
    while (str[i] == '0')
    {
        endZeros++;
        i++;
    }

    /* Check if the entire string has been processed */
    if (str[i] != '\0')
    {
        valid = 0;
    }

    /* Number of starting and ending zeros must be equal */
    if (startZeros != endZeros)
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

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int left, right;
    int valid = 1;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Check whether all characters are 0 or 1 */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            valid = 0;
            break;
        }
    }

    if (valid == 0)
    {
        printf("String does NOT belong to the grammar.\n");
        return 0;
    }

    /* Check palindrome */
    left = 0;
    right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            valid = 0;
            break;
        }

        left++;
        right--;
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

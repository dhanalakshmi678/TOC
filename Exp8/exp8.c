#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    int valid = 1;
    int found = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    /* Check whether string contains only 0 and 1 */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            valid = 0;
            break;
        }
    }

    /* Search for 101 */
    if (valid == 1)
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == '1' &&
                str[i + 1] == '0' &&
                str[i + 2] == '1')
            {
                found = 1;
                break;
            }
        }
    }

    if (valid == 1 && found == 1)
    {
        printf("String belongs to the grammar.\n");
    }
    else
    {
        printf("String does NOT belong to the grammar.\n");
    }

    return 0;
}

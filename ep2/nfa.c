#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int state = 0;
    int i;

    printf("Enter binary string: ");
    scanf("%s", str);

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == '1')
        {
            state = 1;
        }
    }

    if(state == 1)
        printf("\nString Accepted");
    else
        printf("\nString Rejected");

    return 0;
}

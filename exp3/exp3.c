#include <stdio.h>

int n, e;
int eps[20][20];
int closure[20];
int count = 0;

void findClosure(int state)
{
    int i, j, found;

    closure[count++] = state;

    for (i = 0; i < n; i++)
    {
        if (eps[state][i] == 1)
        {
            found = 0;

            for (j = 0; j < count; j++)
            {
                if (closure[j] == i)
                {
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                findClosure(i);
            }
        }
    }
}

int main()
{
    int i, j;
    int from, to, start;

    printf("Enter number of states: ");
    scanf("%d", &n);

    /* Initialize epsilon transition matrix */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            eps[i][j] = 0;
        }
    }

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &e);

    printf("Enter epsilon transitions (from to):\n");

    for (i = 0; i < e; i++)
    {
        scanf("%d %d", &from, &to);
        eps[from][to] = 1;
    }

    printf("Enter the state to find epsilon-closure: ");
    scanf("%d", &start);

    count = 0;
    findClosure(start);

    printf("Epsilon-closure(%d) = { ", start);

    for (i = 0; i < count; i++)
    {
        printf("%d ", closure[i]);
    }

    printf("}\n");

    return 0;
}

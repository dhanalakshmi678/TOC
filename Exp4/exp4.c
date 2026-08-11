#include <stdio.h>

#define MAX_STATES 20
#define MAX_SYMBOLS 20
#define MAX_TRANSITIONS 20

int transition[MAX_STATES][MAX_SYMBOLS][MAX_TRANSITIONS];
int nfa_states;
int nfa_symbols;

/* Function to find epsilon closure */
void epsilonClosure(int state, int epsilonIndex)
{
    int stack[MAX_STATES];
    int visited[MAX_STATES] = {0};
    int top = -1;
    int i;
    int nextState;

    /* Push the starting state */
    stack[++top] = state;
    visited[state] = 1;

    printf("Epsilon-closure(q%d) = { ", state);

    while (top != -1)
    {
        int current = stack[top--];

        printf("q%d ", current);

        /* Check all epsilon transitions */
        for (i = 0; i < MAX_TRANSITIONS; i++)
        {
            nextState = transition[current][epsilonIndex][i];

            if (nextState == -1)
                break;

            if (!visited[nextState])
            {
                visited[nextState] = 1;
                stack[++top] = nextState;
            }
        }
    }

    printf("}\n");
}

int main()
{
    int i, j, k;
    int finalCount;
    int finalState;
    int state, symbol, destination;
    int epsilonIndex = -1;

    /* Initialize transition matrix with -1 */
    for (i = 0; i < MAX_STATES; i++)
    {
        for (j = 0; j < MAX_SYMBOLS; j++)
        {
            for (k = 0; k < MAX_TRANSITIONS; k++)
            {
                transition[i][j][k] = -1;
            }
        }
    }

    /* Number of states */
    printf("Enter number of states: ");
    scanf("%d", &nfa_states);

    /* Number of symbols including epsilon */
    printf("Enter number of symbols including epsilon: ");
    scanf("%d", &nfa_symbols);

    /* Find epsilon symbol */
    printf("Enter the symbols:\n");

    char symbols[MAX_SYMBOLS];

    for (i = 0; i < nfa_symbols; i++)
    {
        printf("Symbol %d: ", i);
        scanf(" %c", &symbols[i]);

        if (symbols[i] == 'e')
        {
            epsilonIndex = i;
        }
    }

    if (epsilonIndex == -1)
    {
        printf("Epsilon symbol 'e' not found.\n");
        return 0;
    }

    /* Number of final states */
    printf("Enter number of final states: ");
    scanf("%d", &finalCount);

    /* Final states */
    printf("Enter final states:\n");

    for (i = 0; i < finalCount; i++)
    {
        scanf("%d", &finalState);
    }

    /*
       Get transitions
       Enter -1 when there is no transition.
    */

    printf("\nEnter transitions.\n");
    printf("Enter -1 if there is no transition.\n");

    for (state = 0; state < nfa_states; state++)
    {
        for (symbol = 0; symbol < nfa_symbols; symbol++)
        {
            printf("\nFrom q%d using symbol '%c'\n",
                   state, symbols[symbol]);

            for (destination = 0;
                 destination < MAX_TRANSITIONS;
                 destination++)
            {
                int next;

                printf("Enter destination state (-1 to stop): ");
                scanf("%d", &next);

                if (next == -1)
                    break;

                transition[state][symbol][destination] = next;
            }
        }
    }

    /* Display epsilon closures */
    printf("\n\nEpsilon Closures:\n");

    for (state = 0; state < nfa_states; state++)
    {
        epsilonClosure(state, epsilonIndex);
    }

    return 0;
}

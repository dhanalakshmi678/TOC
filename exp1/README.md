AIM :

To write a C program to simulate a Deterministic Finite Automata.

ALGORTIHM :

1. Draw a DFA for the given language and construct the transition table.
2. Store the transition table in a two-dimensional array.
3. Initialize present_state, next_state and final_state
4. Get the input string from the user.
5. Find the length of the input string.
6. Read the input string character by character.
7. Repeat step 8 for every character
8. Refer the transition table for the entry corresponding to the present state
and the current input symbol and update the next state.
9. When we reach the end of the input, if the final state is reached, the input
is accepted. Otherwise the input is not accepted.


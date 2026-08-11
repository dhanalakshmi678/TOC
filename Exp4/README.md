AIM

To write a C program to find the ε-closure of a Non-Deterministic Finite Automata (NFA) with ε-moves.

ALGORITHM
Start the program.
Get the following inputs from the user:
Number of states in the NFA.
Number of symbols in the input alphabet including ε.
Input symbols.
Number of final states and their names.
Declare a 3-dimensional transition matrix to store the transitions.
Initialize all entries of the transition matrix with -1.
Get the transitions from every state for every input symbol from the user.
Store the destination states in the transition matrix.
Identify the position of the ε symbol in the input alphabet.
For each state, initialize a visited array and a stack.
Add the current state to the stack and mark it as visited.
Remove a state from the stack and add it to its ε-closure.
Check all ε-transitions from the current state.
If an unvisited state is reachable through an ε-transition, add that state to the stack and mark it as visited.
Continue the process until the stack becomes empty.
Display the ε-closure of the current state.
Repeat the process for all states of the NFA.
Stop the program.
RESULT:

Thus, the C program to find the ε-closure of a Non-Deterministic Finite Automata with ε-moves was successfully implemented and executed, and the ε-closure of each state was obtained successfully.

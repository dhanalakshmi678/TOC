AIM:
To design and implement a Deterministic Finite Automaton (DFA) using a simulator that accepts strings containing an even number of as.

ALGORITHM:
Start with the initial state q0, representing an even number of as.
For every input a, change the state between q0 and q1.
On input b, remain in the same state.
State q0 is the final/accepting state because it represents an even number of as.
State q1 represents an odd number of as.
Read the input string completely.
If the machine ends in q0, accept the string; otherwise, reject it.
DFA TRANSITION TABLE
Current State	Input a	Input b
→ q0 (Even)	q1	q0
q1 (Odd)	q0	q1

Initial state: q0
Final state: q0

RESULT:
Thus, the DFA was successfully designed using a simulator to accept strings having an even number of as and reject strings having an odd number of as.

AIM:
To design and implement a Deterministic Finite Automaton (DFA) using a simulator that accepts strings containing an odd number of as.

ALGORITHM:
Start with the initial state q0, representing zero as (even).
When an a is read, change the state between q0 and q1.
When a b is read, remain in the same state.
State q1 represents an odd number of as and is the final/accepting state.
Read the input string completely.
If the machine ends in q1, accept the string; otherwise, reject it.
DFA TRANSITION TABLE
Current State	Input a	Input b
→ q0 (Even)	q1	q0
q1 (Odd) ★	q0	q1

Initial State: q0
Final State: q1

RESULT:
Thus, the DFA was successfully designed using a simulator to accept strings containing an odd number of as and reject strings containing an even number of as.

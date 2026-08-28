AIM:
To design and implement a Deterministic Finite Automaton (DFA) using a simulator to accept strings that end with ab over the alphabet {a, b}.

ALGORITHM:
Start from the initial state q0.
Read the input string from left to right.
If a is read from q0, move to q1.
If b is read from q1, move to q2.
State q2 is the final state, indicating that the string ends with ab.
For other inputs, move to the appropriate state while keeping track of the last characters.
After reading the complete string, accept the string if the DFA ends in q2; otherwise, reject it.
DFA TRANSITION TABLE
Current State	a	b
→ q0	q1	q0
q1	q1	q2
q2 ★	q1	q0

Initial State: q0
Final State: q2

FOR GIVEN STRING: aaabab

Processing:

q0 → q1 → q1 → q1 → q2 → q1 → q2

Since the DFA ends in q2, the string aaabab is accepted.

RESULT:
Thus, the DFA was successfully designed using a simulator to accept strings ending with ab. The given string W = aaabab is accepted because it ends with ab.

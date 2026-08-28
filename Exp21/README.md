AIM:
To design and implement a Deterministic Finite Automaton (DFA) using a simulator to accept strings having ab as a substring over the alphabet {a, b}.

ALGORITHM:
Start with the initial state q0, where no ab has been found.
If a is read in q0, move to q1.
If b is read in q0, remain in q0.
In q1, if b is read, move to q2, indicating that ab has been found.
In q1, if a is read, remain in q1.
Once q2 is reached, remain in q2 for both a and b.
After reading the complete string, accept if the DFA ends in q2.
DFA TRANSITION TABLE
Current State	a	b
→ q0	q1	q0
q1	q1	q2 ★
q2 ★	q2	q2

Initial State: q0
Final State: q2

RESULT:
Thus, the DFA was successfully designed using a simulator to accept all strings containing ab as a substring over {a, b}.

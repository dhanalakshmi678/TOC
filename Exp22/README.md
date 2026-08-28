AIM:
To design and implement a Deterministic Finite Automaton (DFA) using a simulator to accept strings that start with a or b over the alphabet {a, b}.

ALGORITHM:
Start from the initial state q0.
If the first input is a, move to q1.
If the first input is b, move to q1.
State q1 is the final state because the string has started with either a or b.
Once q1 is reached, for every subsequent a or b, remain in q1.
After reading the complete string, if the DFA is in q1, accept the string.
DFA TRANSITION TABLE
Current State	a	b
→ q0	q1 ★	q1 ★
q1 ★	q1	q1

Initial State: q0
Final State: q1

RESULT:
Thus, the DFA was successfully designed using a simulator to accept strings starting with either a or b over the set {a, b}.

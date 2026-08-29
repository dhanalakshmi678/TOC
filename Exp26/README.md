AIM:
To design a DFA using a simulator to accept the input strings bc, c, and bcaaa.

ALGORITHM:
Start the DFA with the initial state q0.
Create states to process the strings bc, c, and bcaaa.
From q0, on input b, move to q1.
From q1, on input c, move to q2.
From q2, on input a, move to q3.
Continue the transitions for aaa to reach the final state.
From q0, on input c, move directly to a final state.
Mark the states representing complete strings bc, c, and bcaaa as final states.
Enter the given input strings into the simulator.
If the input ends in a final state, accept the string; otherwise, reject it.
TRANSITION TABLE
State	a	b	c
→ q0	Dead	q1	q5
q1	Dead	Dead	q2
★ q2	q3	Dead	Dead
q3	q4	Dead	Dead
q4	q6	Dead	Dead
★ q5	Dead	Dead	Dead
★ q6	Dead	Dead	Dead
qd	qd	qd	qd
q0 → Initial state
q2 → Accepts bc
q5 → Accepts c
q6 → Accepts bcaaa
qd → Dead state

RESULT:
Thus, the DFA was successfully designed using the simulator and it accepts the strings bc, c, and bcaaa and rejects all other strings.

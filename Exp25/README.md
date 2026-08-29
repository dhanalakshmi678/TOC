AIM:
To design a Deterministic Finite Automaton (DFA) using a simulator to accept strings containing an even number of a’s and an odd number of b’s.

ALGORITHM:
Start the DFA with the initial state q0.
Define four states: q0, q1, q2, q3 to represent the parity of a’s and b’s.
On reading a, change the parity of the number of a’s.
On reading b, change the parity of the number of b’s.
Make q0 the initial state.
Make q2 the final state because it represents even a’s and odd b’s.
Enter the input string into the simulator.
If the DFA reaches q2 after processing the complete string, accept the string; otherwise, reject it.

RESULT:
Thus, the DFA was successfully designed and simulated to accept strings having an even number of a’s and an odd number of b’s.

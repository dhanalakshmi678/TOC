AIM:
To design an NFA using a simulator to accept any number of a’s over the input alphabet Σ = {a, b}.

ALGORITHM:
Start the NFA with the initial state q0.
Define the input alphabet as Σ = {a, b}.
Make q0 the initial state.
Make q0 a final state.
Add a transition from q0 to q0 on input a.
Do not provide a valid transition for b.
Enter the input string in the simulator.
If the complete input contains only a’s, accept the string; otherwise, reject it.
NFA TRANSITION TABLE
State	a	b
→ ★q0	q0	—

Initial State: q0
Final State: q0

RESULT:
Thus, the NFA was successfully designed to accept any number of a’s, including the empty string ε, and reject strings containing b.

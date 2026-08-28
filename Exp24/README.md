AIM:
To design and implement a Turing Machine (TM) using a simulator to accept the input string wcw, where the string has the form w c w.

ALGORITHM:
Place the input string wcw on the tape.
Start from the leftmost symbol of the first w.
Read and mark the symbols of the first w one by one.
Move right until the separator symbol c is reached.
Move to the corresponding symbol after c and compare it with the marked symbol from the first w.
If the symbols match, mark the second symbol as processed.
Repeat the process for all symbols in w.
If all symbols on both sides of c match in the required order, move to the Accept state.
If any symbol does not match, move to the Reject state.
EXAMPLE

For the input:

w c w

The TM checks:

w = w ✓

Hence, the input is accepted.

RESULT:
Thus, the Turing Machine was successfully designed using a simulator to accept strings of the form wcw, where the strings on both sides of c are identical.

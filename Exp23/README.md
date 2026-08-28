AIM:
To design and implement a Turing Machine (TM) using a simulator to accept the input string bbabb, which is a palindrome.

ALGORITHM:
Place the input string bbabb on the tape.
Start from the leftmost symbol.
Read the first symbol and mark it as processed.
Move to the right end of the string and compare it with the corresponding last symbol.
If both symbols are the same, mark the last symbol as processed.
Move back to the left and repeat the process for the remaining symbols.
Continue until all symbols are matched.
If all corresponding symbols are equal, move to the Accept state.
If any two corresponding symbols are different, move to the Reject state.
PROCESSING

Input:

b b a b b

Comparison:

First b = Last b ✓
Second b = Second-last b ✓
Middle a remains ✓

Therefore:

bbabb = reverse(bbabb)

RESULT:
Thus, the Turing Machine was successfully designed using a simulator and the input string bbabb is accepted, since it is a palindrome.

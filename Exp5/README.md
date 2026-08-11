AIM

To write a C program to check whether a given string belongs to the grammar
S → 0S0 | 1S1 | 0 | 1 | ε

ALGORITHM
Algorithm: Checking String Belongs to Grammar
Start the program.
Read the input string.
Find the length of the string.
If the string is empty, accept it because S→ϵ.
Check whether every character in the string is either 0 or 1.
Set two pointers:
left = 0
right = length - 1
Compare the characters at left and right.
If they are different, reject the string.
If they are the same, move left forward and right backward.
Continue until left >= right.
If all corresponding characters match, accept the string.
Display whether the string belongs to the grammar.
Stop.

RESULT

Thus, the C program to check whether a given string belongs to the grammar S → 0S0 | 1S1 | 0 | 1 | ε was successfully implemented and executed. The program correctly identifies whether the given string belongs to the grammar.

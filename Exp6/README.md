AIM

To write a C program to check whether a given string belongs to the grammar
S → 0S0 | A
A → 1A | ε

ALGORITHM
Start the program.
Read the input string.
Check whether the string contains only 0 and 1.
Count the number of 0s at the beginning of the string.
After the initial 0s, check for the middle sequence of 1s.
Count the number of 1s.
After the 1s, check for the final sequence of 0s.
Count the final 0s.
Check whether:
The string has the form 0*1*0*.
Number of initial 0s = number of final 0s.
If both conditions are satisfied, accept the string.
Otherwise, reject the string.
Display the result.
Stop.

RESULT

Thus, the C program to check whether a given string belongs to the grammar S → 0S0 | A, A → 1A | ε was successfully implemented and executed. The program correctly identifies strings belonging to the language L={0^n 1^m 0^n}.

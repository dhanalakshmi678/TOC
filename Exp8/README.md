AIM

To write a C program to check whether a given string belongs to the grammar
S → A101A
A → 0A | 1A | ε

ALGORITHM
Start the program.
Read the input string.
Check whether the string contains only 0 and 1.
Search for the required substring 101.
Since A can generate any sequence of 0s and 1s, characters may occur before and after 101.
If 101 occurs in the string, accept the string.
Otherwise, reject the string.
Display the result.
Stop.

RESULT

Thus, the C program to check whether a given string belongs to the grammar S → A101A, A → 0A | 1A | ε was successfully implemented and executed. The program successfully checks whether the given string contains the required pattern 101 and displays the result.

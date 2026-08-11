AIM

To design a Push Down Automata (PDA) that accepts the language in which the number of as in the string is equal to the number of bs.

ALGORITHM
Start the PDA.

Define the input alphabet as:

Σ={a,b}
Start from the initial state with an empty stack or bottom-of-stack symbol.
When an a is read:
If the stack contains a b, pop b.
Otherwise, push a onto the stack.
When a b is read:
If the stack contains an a, pop a.
Otherwise, push b onto the stack.
Continue reading the input string until all symbols are processed.
After processing the complete string:
If the stack is empty (apart from the bottom marker), the number of as equals the number of bs.
Accept the string.
If the stack is not empty, the numbers of as and bs are unequal.
Reject the string.
Stop.
RESULT

Thus, the Push Down Automata for accepting strings having an equal number of as and bs was successfully designed. The PDA accepts strings for which n
a
	​

(w)=n
b
	​

(w) and rejects strings for which n
a
	​

(w)

=n
b
	​

(w).

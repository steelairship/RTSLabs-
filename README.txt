Shyheim Williams

to compile:
	gcc -o functions main.cpp functions.cpp
to run:
	./functions

Notes:
	-on the initial menu, enter 1 for aboveBelow, 2 for stringRotation
	
	-when typing list of ints, put spaces (but no commas) between them and end the list with -1 and an enter/return

	e.g.
	Enter comparison value: 5
	Enter list of integers: 1 2 3 4 5 6
	below: 4
	above: 1  

	-in string rotation, if the rotation amount is greater than the size of the string, modulo is applied to continue wrapping the letters.


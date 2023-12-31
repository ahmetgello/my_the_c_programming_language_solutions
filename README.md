# my_the_c_programming_language_solutions
This is my notes, mostly gonna be Exercise solutions from the famous K&amp;R (Kernighan &amp; Ritchie) "The C Programming Language" book.

## [Exercise 1-1](Ex-1-1.c)
When I delete the include stdlib.h library. I get compilation error because 'printf' function is not declared anymore.  
When I delete main(). I get expected identifier or '('. I think identifier is main.  
When I delete first curly bracket '{': I get expected function body after decleration, pretty intuitive. And I get: Extraneous closing brace '}'.  
When I delete printf: the program runs, but don't print anything.  
When I delete the last brace '}' I get: expected '}' to match the first one.  

## [Exercise 1-2](Ex-1-2.c)
Get a warning that \c is an unkown escape sequence.  
Prints 'c' but not the backslash '\'.  

## [Exercise 1-3](Ex-1-3.c)
Added header. Changed some %3f to #5f for more space.  

## [Exercise 1-4](Ex-1-4.c)
Celsius to Fahrenheit

## [Exercise 1-5](Ex-1-5.c)
Learned to define constants.  
Printing the table in reverse oreder with a reverse style for loop.  

## [Exercise 1-6](Ex-1-6.c)
We make a variable and assign getchar() != EOF to it, then print the variable.  
Prints 1 when EOF is typed.  

## [Exercise 1-7](Ex-1-7.c)
Just putchar or printf with %d.

## [Exercise 1-8](Ex-1-8.c)
Counts blanks, tabs, and new lines with a while loop until it's EOF.  
Check every character in the loop.  

## [Exercise 1-9](Ex-1-9.c)
Has two ints c and prev_char, if current character is equal to the prev character and it's equal to a blank don't do anyting 'continue', else print the character.  

## [Exercise 1-10](Ex-1-10.c)
Need to use printf not putchar, it's a bit tricky because backslash is weird.  

## Exercise 1-11
Test by giving different texts.  
Things like 2 blanks '  ', or a new line may uncover errors.  

## [Exercise 1-12](Ex-1-12.c)
Printing a new line every encounter of a unique blank.  
It would be better if it wasn't printing a line when a blank is preceeding or at the end.  

## [Exercise 1-13](Ex-1-13.c)
Checking for word end and start by usnig the previous method of: state = IN/OUT.  
We print the histogram when it's out of a word.  

## [Exercise 1-14](Ex-1-14.c)
Storing frequency of characters in an array.  
We add 1 to the c - 'a' character for each character.  

## [Exercise 1-15](Ex-1-15.c)
The same 1.2 Section program, but using a funcion.  

## [Exercise 1-16](Ex-1-16.c)
Revised the program, and changed MAXLINE constant to __INT16_MAX__.  

## [Exercise 1-17](Ex-1-17)
Printing lines that are longer than MINIMUM constant.  
I made it so that you input line by line, because I see that using EOF is weird.  

## [Exercise 1-18](Ex-1-18)
I count preceeding blanks with a while loop.  
Then copy line to cleanline with removed blanks.  

## [Exercise 1-19](Ex-1-19)
Added reverse() funciton, it make temp array. assigns value in reverse.  




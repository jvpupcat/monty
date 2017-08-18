# Monty
A version of `interpreter for Monty ByteCodes files` named `monty ` created by Wendy Segura and Joann Vuong .

`monty` is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.


## Example of monty function:
`push 1
 push 2
 push 3
 pall`

* Output: prints to stdout: 
`3
 2
 1`

## Project Notes

### Style
All files are in the `Betty` style. Notes on this style can be found at https://github.com/holbertonschool/Betty/wiki

### Compilation
All files will be compiled with the following: `$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

### Functions
The following functions are handled with `monty`:
* `pint`: prints the value at the top of the stack, followed by a new line.
* `pall`: pall prints all the values on the stack, starting from the top of the stack.
* `push`: push pushes an element to the stack
* `nop`: implement the nop opcode.
* `pop`: pop removes the top element of the stack.



## Files
* `README.md` : Current file, contains information about this project
* `monty.h` : Header file, contains all prototypes for funcitons used, as well as libriaries and macros
* `monty.c` : Contains the code for `monty`
* `pushpallpintpop.c`: File for functions push, pall, pint, and pop
* `swapnop.c`: File containing function for nop
* `stack_struct.h`: stack related strutcts
* `match_specifier.c`: function pointer
* `free.c`: File that free malloc and other 


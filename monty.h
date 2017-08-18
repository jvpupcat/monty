#ifndef MONTY_H
#define MONTY_H
#include "stack_struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

/*Macros*/
#define DELIM "\n\t\r "
/* error strings */
#define ERR_MALLOC "Error: malloc failed\n"
#define FAIL "EXIT_FAILURE"
#define ERR_ARG "USAGE: monty file\n"
#define ERR_OPEN "Error: Can't open file"
#define ERR_INVALID "unknown instruction\n"
#define ERR_INT "usage: push integer\n"
#define ERR_PINT "can't pint, stack empty\n"
#define ERR_POP "can't pop an empty stack\n"
#define ERR_SWAP "can't swap, stack too short\n"
#define ERR_ADD "can't add, stack too short\n"

/* MATCH_OP FUNCTION */
int match_op(char *opcode, stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
/**void swap(stack_t **stack, unsigned int line_number);**/
/**void _add_stack(stack_t **stack, unsigned int line_number);**/
void nop(stack_t **stack, unsigned int line_number);
void free_list(stack_t **stack);
#endif

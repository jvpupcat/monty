#ifndef MONTY_H
#define MONTY_H
#include "stack_struct.h"
#define EXIT_FAILURE 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define TRUE 1
/* error strings */
#define FAIL "EXIT_FAILURE"
#define ERR_ARG "USAGE: monty file\n"
#define ERR_OPEN "Error: Can't open file\n"
#define ERR_INVALID "unknown instruction\n"
#define ERR_INT "usage: push integer\n"
#define ERR_PINT "can't pint, stack empty\n"
#define ERR_POP "can't pop an empty stack\n"
#define ERR_SWAP "can't swap, stack too short\n"
#define ERR_ADD "can't add, stack too short\n"

extern int **tracker;

/* HELPER FUNCTIONS */
int _strcmp(char *s1, char *s2);

/* HELPER LINKED LIST FUNCTIONS */
stack_t *create_node(int n);
stack_t *add_dnodeint(stack_t **stack, const int n);
stack_t *add_dnodeint_end(stack_t **stack, const int n);

/* MATCH_OP FUNCTION */
int match_op(char *opcode, stack_t **stack, unsigned int line_number);
void *create_node(int n, stack_t **stack, unsigned int line_number);
void *push(stack_t **stack, unsigned int line_number);
void *pall(stack_t **stack, unsigned int line_number);
void *pop(stack_t **stack, unsigned int line_number);
void *swap(stack_t **stack, unsigned int line_number);
void *_add(stack_t **stack, unsigned int line_number);
void *nop(stack_t **stack, unsigned int line_number);

#endif

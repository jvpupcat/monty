#ifndef MONTY_H
#define MONTY_H
#define EXIT_FAILURE 1
#include <stdio.h>

/* HELPER FUNCTIONS */
int _strcmp(char *s1, char *s2);


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

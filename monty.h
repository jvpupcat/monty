#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/* MATCH_OP FUNCTION */
/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void match_op(char *opcode);
char *push(stack_t **stack, unsigned int line_number);
char *pall(stack_t **stack, unsigned int line_number);
char *pop(stack_t **stack, unsigned int line_number);
int swap(stack_t **stack, unsigned int line_number);
int _add(stack_t **stack, unsigned int line_number);
char *nop(stack_t **stack, unsigned int line_number);

#endif

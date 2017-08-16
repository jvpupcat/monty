#ifndef MONTY_H
#define MONTY_H
#define EXIT_FAILURE 1
#include <stdio.h>

/* HELPER FUNCTIONS */
int _strcmp(char *s1, char *s2);

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
int match_op(char *opcode, stack_t **stack, unsigned int line_number);
void *create_node(int n, stack_t **stack, unsigned int line_number);
void *push(stack_t **stack, unsigned int line_number);
void *pall(stack_t **stack, unsigned int line_number);
void *pop(stack_t **stack, unsigned int line_number);
void *swap(stack_t **stack, unsigned int line_number);
void *_add(stack_t **stack, unsigned int line_number);
void *nop(stack_t **stack, unsigned int line_number);

#endif

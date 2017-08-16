#include "monty.h"

/**
 *
 *
 *
 **/
void *create_node(stack_t **stack, unsigned int line_number)
{
	stack_t *add_node;

	add_node = malloc(sizeof(stack_t));
	if (add_node == NULL)
		return (NULL);
	add_node->line_number = line_number;
	add_node->prev = NULL;
	add_node->next = NULL;
	return (add_node);
}

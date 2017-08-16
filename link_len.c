/**
**listint_len - prints all the elements
**@h: pointer to list
**
**Return: number of nodes
**/
size_t link_len(stack_t **stack)
{
	stack_t i;
        unsigned int counter = 0;

        i = *stack;
	
	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}

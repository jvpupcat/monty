/**
**_add - sum of two nodes
**@stack: arg
**@line_number: arg
**Return: sum of two nodes
**/
void _add_stack(stack_t **stack, unsigned int line_number)
{
	int value_1, value_2, total_value

	if (link_len(stack) < 2)
	{
		printf("L%d: %s", line_numbers, ERR_ADD);
		exit("%s", FAIL)
	}
	while (head != NULL)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}

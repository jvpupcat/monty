#include "monty.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: 0 upon success
 **/
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int diff = 0;

	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	if (s1[x] != s2[x])
	{
		diff = s1[x] - s2[x];
		return (diff);
	}
	return (0);
}

/**
**link_len - prints all the elements
**@stack: pointer to list
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
int _atoi(char *s)
{
  int i, n;

  n = 0;
  for (i=0; s[i]>='0' && s[i]<='9'; ++i)
    n = 10*n+(s[i]-'0');
  return n;
}

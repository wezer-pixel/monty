#include "monty.h"

/**
 * f_swap - adds the top two elements of stack
 * @counter: line_number
 * @head: stack head
 * Return: void
*/

void f_swap(stack_t **head, unsigned int counter)
{
	int aux, len = 0;
	stack_t *h;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}

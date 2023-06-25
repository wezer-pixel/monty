#include "monty.h"

/**
 *f_sub- subtraction
 *@counter: line_number
 *@head: stack head
 *Return: void
 */

void f_sub(stack_t **head, unsigned int counter)
{
	int sub, nodes;
	stack_t *aux;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub = aux->next->n - aux->n;
	aux->next->n = sub;
	*head = aux->next;
	free(aux);
}

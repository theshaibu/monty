#include "monty.h"

/**
 * pop_stack - Removes the top element from the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number in the Monty bytecode file
 * Return: No return value
 */
void pop_stack(stack_t **head, unsigned int counter)
{
    stack_t *top;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    top = *head;
    *head = top->next;
    free(top);
}


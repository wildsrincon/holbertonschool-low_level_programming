#include "lists.h"
/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int x;
	list_t *new_node;

	x = 0;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i] != 0)

		i++;
	new_node->str = str;
	new_node->len = i;
	new_node->next = (*head);

	*head = new_node;
	return (new_node);
}


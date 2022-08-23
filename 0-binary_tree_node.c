#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_node - creates a node.
 * @parent : is a pointer to the parent node
 * @value : is the value to put in the new node
 * Return: pointer to the new node or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	return (new);
}

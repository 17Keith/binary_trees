#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_insert_left - inserts a nodde as a left-child
 * @parent: is a pointer to the node to insert the left-chld in
 * @value: value to store the new node
 * Return: Pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;
	parent->left = new;
	if (new->left)
		new->left->parent = new;

	return (new);
}

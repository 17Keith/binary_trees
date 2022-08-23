#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_insert_right - inserts a nodde as a right-child
 * @parent: is a pointer to the node to insert the left-chld in
 * @value: value to store the new node
 * Return: Pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	if (new->right)
		new->right->parent = new;
	parent->right = new;

	return (new);

}

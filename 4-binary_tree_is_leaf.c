#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_is_leaf - Checks if the node is a leaf.
 * @node: Apointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0;
 * if node is NULL, return 0;
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((node->left || node->right) ? 0 : 1);

}


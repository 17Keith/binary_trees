#include "binary_trees.h"

/**
 * binary_tree_depth- Gets the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

#include "binary_trees.h"

/**
 * binary_tree_depth- Gets the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* size_t depth_l = 0;
	size_t depth_r = 0;
	 */
	size_t depth = 0;

	if (!tree)
	return (0);

	/* depth_l = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
	depth_r = tree->right ? 1 + binary_tree_depth(tree->right) : 0;
	return (depth_l > depth_r ? depth_l : depth_r);
 */
	while (tree->parent)
		{
			depth++;
			tree = tree->parent;
		}

		return (depth);
}

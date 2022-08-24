#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that goes through a binary tree
 * @tree: is a pointer to the rt node
 * @func: is a pointer to a function to call for each node.
 * If tree or func is NULL, nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

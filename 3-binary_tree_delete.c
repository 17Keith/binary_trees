#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_delete - deletes a binary tree entirely.
 * @tree: is a pointer to the root node of the tree to delete.
 * if tree is NULL, do nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}

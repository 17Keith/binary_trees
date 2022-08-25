#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: is a pointer to the root node.
 * Return: 0 if tree is NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
	return (0);

	size = binary_tree_size(tree);

	return (complete_helper(tree, 0, size));

}

/**
 * complete_helper - checks if a binary tree is complete
 * @index: node index to check
 * @tree: pointer to the root node
 * @size: number of nodes in the tree
 * Return: 0 if tree is NULL or if the tree is not complete
 */

int complete_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
	return (0);

	if (index >= size)
	return (0);

	return (complete_helper(tree->left, 2 * index + 1, size) &&
			complete_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size- Gets the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{


	if (!tree)
		return (0);


	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks to see if the binary tree is perfect
 * @tree: is a pointer to the root node
 * Return: 0 if tree is Null
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	if (binary_tree_is_perfect(tree) != 0)
	return (0);

	if (tree->right && tree->left)
	{
		return (binary_tree_is_perfect(tree->right) &&
			binary_tree_is_perfect(tree->left));
	}
	return (0);
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


/**
 * binary_tree_height- Gets the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;

	if (!tree)
	return (0);

	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	return (height_l > height_r ? height_l : height_r);
}

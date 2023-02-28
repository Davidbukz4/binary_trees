#include "binary_trees.h"

/**
 * binary_tree_size - measures the size binary tree
 * @tree: pointer to the node to measure the size
 * Return: size of node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = 1 + left + right;

	return (size);
}

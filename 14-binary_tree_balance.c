#include "binary_trees.h"
/**
 * measure_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */
size_t measure_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + measure_height(tree->left);
	else
		left += 1;
	if (tree->right)
		right = 1 + measure_height(tree->right);
	else
		right += 1;
	if (left > right)
		return (left);
	return (right);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, bf = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		left = ((int)measure_height(tree->left));
		right = ((int)measure_height(tree->right));
		bf = left - right;
	}
	return (bf);
}

#include "binary_trees.h"

/**
 * check_tree - checks if tree is perfect
 * @tree: pointer to the root node
 * Return: number of levels and 1 if tree is perfect
 */
int check_tree(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + check_tree(tree->left);
		right = 1 + check_tree(tree->right);
		if (left == right && left != 0 && right != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if tree if perfect, otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int status = 0;

	if (tree == NULL)
		return (0);
	status = check_tree(tree);
	if (status != 0)
		return (1);
	return (0);
}

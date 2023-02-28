#include "binary_trees.h"

void insert(int data, binary_tree_t *parent)
{
	binary_tree_t *temp, *current, *root;
	temp = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	temp->data = data;
	temp->lefChild = NULL;
	temp->rightChild = NULL;

	/* if tree is empty, create root node */
	if (parent == NULL)
	{
		parent = temp;
	}
	else
	{
		current = parent;
		root = NULL;

		while (1)
		{
			root = current;

			/* go to the left */
			if (data < root->data)
			{
				current = current->lefChild;
				/* insert to the left */
				if (current == NULL)
				{
					root->lefChild = temp;
					return;
				}
			}
			/* go to the right */
			else
			{
				current = current->rightChild;

				/* insert to the right */
				if (current == NULL)
				{
					root->rightChild = temp;
					return;
				}
			}
		}
	}
}

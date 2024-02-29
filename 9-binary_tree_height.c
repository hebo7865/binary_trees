#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree, or 0 if tree height is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			leftHeight = 1 + binary_tree_height(tree->left);
			rightHeight = 1 + binary_tree_height(tree->right);
		}
		else
		{
		leftHeight = 0;
		rightHeight = 0;
		}
	}
	if (leftHeight > rightHeight)
	{
		return (leftHeight);
	}
	else
	{
		return (rightHeight);
	}
}

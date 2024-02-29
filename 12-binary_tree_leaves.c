#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: tree leaves, or 0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave = 0, left = 0, right = 0;

	if (tree != NULL)
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leave = left + right;
		if (!left && !right)
		{
			leave += 1;
		}
		else
		{
			leave += 0;
		}
	}
	else
	{
		return (0);
	}
	return (leave);
}

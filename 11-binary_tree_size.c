#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: tree depth, or 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, leftSize = 0, rightSize = 0;

	if (tree != NULL)
	{
		leftSize = binary_tree_size(tree->left);
		rightSize = binary_tree_size(tree->right);
		size = leftSize + rightSize + 1;
	}
	else
	{
		return (0);
	}
	return (size);
}

#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: tree nodes, or 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree != NULL)
	{
		if (tree->left || tree->right)
		{
			node += 1;
		}
		else
		{
			node += 0;
		}
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
	}
	else
	{
		return (0);
	}
	return (node);
}

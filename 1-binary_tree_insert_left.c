#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @root: parent node
 * @value: node value
 * Return: the node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *root, int value)
{
	binary_tree_t *node;

	if (root == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(root, value);
	if (node == NULL)
	{
		return (NULL);
	}
	if (root->left != NULL)
	{
		node->left = root->left;
		root->left->parent = node;
	}
	root->left = node;
	return (node);
}

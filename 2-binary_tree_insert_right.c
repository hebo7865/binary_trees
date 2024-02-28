#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @root: parent node
 * @value: node value
 * Return: the node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *root, int value)
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
	if (root->right != NULL)
	{
		node->right = root->right;
		root->right->parent = node;
	}
	root->right = node;
	return (node);
}

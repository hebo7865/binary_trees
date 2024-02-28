#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create binary node
 * @root: parent node
 * @value: node value
 * Return: the node
*/

binary_tree_t *binary_tree_node(binary_tree_t *root, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = root;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

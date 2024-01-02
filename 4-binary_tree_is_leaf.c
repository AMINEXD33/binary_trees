#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_is_leaf - check if a node is a leaf or not
*@node: the node to check
*Return: 1 if it's a leaf 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL && node->parent != NULL)
			return (1);
	}
	return (0);
}

#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*binary_tree_is_root - check if a node it's the root or not
*@node: the node to check
*Return: 1 if it's a leaf 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}

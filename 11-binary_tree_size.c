#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
*binary_tree_size - calc the size of a binary tree
*@tree: the node we're staring from
*Return: the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t res = 0;

	if (tree == NULL)
		return (res);

	if (tree->right)
		res += binary_tree_size(tree->right);
	if (tree->left)
		res += binary_tree_size(tree->left);

	return (res + 1);
}

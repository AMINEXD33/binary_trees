#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
*binary_tree_depth -  calc the deapth of a node
*@tree: the starting node
*Return: the deapth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
		return (0);
}

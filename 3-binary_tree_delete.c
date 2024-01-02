#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
*binary_tree_delete - recursevly delete all nodes in the tree
*@tree: the root node of the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right = NULL;
	binary_tree_t *left = NULL;

	if (tree == NULL)
		return;
	if (tree->right)
		right = tree->right;
	if (tree->left)
		left = tree->left;
	free(tree);
	binary_tree_delete(right);
	binary_tree_delete(left);
}

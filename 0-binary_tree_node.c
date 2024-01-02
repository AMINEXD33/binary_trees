#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
*binary_tree_node - return a new constructed node with respect to the
*                  parent.
*@parent: the parent node.
*@value: the value the node shall have.
*Return: the node or NULL on allocation failure.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	/*on malloc failure*/
	if (node == NULL)
		return (NULL);
	/*node config*/
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	return (node);
}

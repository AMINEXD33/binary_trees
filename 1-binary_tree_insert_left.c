#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
*binary_tree_insert_left - insert a node into the left pointer of a parent
*@parent: the parent node
*@value: the value of the the new created node
*Return: the node it self, NULL if the malloc failed
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
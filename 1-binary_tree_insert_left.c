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
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	/*malloc failed*/
	if (node == NULL)
		return (NULL);
	/*the parent needs to exists*/
	if (parent == NULL)
		return (NULL);
	
	/*node config*/
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	/*insert into the left pointer of the parent*/
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	else
		parent->left = node;
	return (node);
}

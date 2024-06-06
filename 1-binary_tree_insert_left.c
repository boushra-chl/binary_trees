/**
 * binary_tree_insert_left - function that inserts a node as left child
 *
 * @parent: pointer to the parent node
 * @value: value to store in the created node
 *
 * Return: pointer to the created node
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return NULL;

	new_node-> parent = parent;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;
	return (new_node);
}

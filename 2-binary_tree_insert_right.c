/**
 * binary_tree_insert_right - function that inserts a node as right child
 *
 * @parent: pointer to the parent node
 * @value: value to store in the created node
 *
 * Return: pointer to the created node
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->n = value;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}
	parent->right = new_node;
	return (new_node);
}

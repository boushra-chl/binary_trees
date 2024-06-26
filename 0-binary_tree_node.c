/**
 * binary_tree_node - function that creates a node
 *
 * @parent: pointer to the parent node
 * @value: value to store in the created node
 *
 * Return: pointer to the created node
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}

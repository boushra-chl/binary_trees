/**
 * binary_tree_is_root - function that checks if a node is root
 *
 * @node: node to check
 *
 * Return: 0 or 1
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}

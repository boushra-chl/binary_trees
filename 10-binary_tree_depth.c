/**
 * binary_tree_depth - function that calculates the depth of a node
 *
 * @tree: pointer to the node
 *
 * Return: depth of node
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}

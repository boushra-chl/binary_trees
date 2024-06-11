/**
 * binary_tree_nodes - function that calculates nodes with at least 1 child
 *
 * @tree: pointer to the root node
 *
 * Return: number of nodes with at least 1 child
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;
	else
		count = 0;

	return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

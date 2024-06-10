/**
 * binary_tree_leaves - function that calculates the leaves
 *
 * @tree: pointer to the root node
 *
 * Return: depth number of leaves
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return(binary_tree_leaves(tree->left) == 0 && binary_tree_leaves(tree->right) == 0);
	
}

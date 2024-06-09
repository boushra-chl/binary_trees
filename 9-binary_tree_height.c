/**
 * binary_tree_height - function that calculates the heights of a tree
 *
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}

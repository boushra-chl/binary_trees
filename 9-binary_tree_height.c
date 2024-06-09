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
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);
}

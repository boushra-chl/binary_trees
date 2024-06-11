/**
 * binary_tree_balance - function that calculates the balance factor of a tree
 *
 * @tree: pointer to the root node
 *
 * Return: balance factor
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;

	return (left_height - right_height);
}

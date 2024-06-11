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
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = 1;
	else
		left_height = 0;

	if (tree->right)
		right_height = 1;
	else
		right_height = 0;

	return (left_height + binary_tree_balance(tree->left) - right_height - binary_tree_balance(tree->right));
}

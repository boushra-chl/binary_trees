#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - function that calculates the heights of a tree
 *
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);
}

/**
 * binary_tree_balance - function that calculates the balance factor of a tree
 *
 * @tree: pointer to the root node
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree->left)
		left_height = binary_tree_height(tree->left);
	else
		left_height = 0;
	if (tree->right)
		right_height = binary_tree_height(tree->right);
	else
		right_height = 0;

	return (left_height - right_height);
}

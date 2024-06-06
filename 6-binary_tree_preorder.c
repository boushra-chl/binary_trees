/**
 * binary_tree_preorder - function that goes througha binary tree pre-order
 *
 * @tree: pointer to the root node
 * @func:  pointer to a function to call for each node
 *
 * Return: Nothing
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

/**
 * binary_tree_postorder - function that goes through binary tree postorder
 *
 * @tree: pointer to the root node
 * @func:  pointer to a function to call for each node
 *
 * Return: Nothing
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

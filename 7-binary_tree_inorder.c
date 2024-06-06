/**
 * binary_tree_inorder - function that goes through binary tree inorder
 *
 * @tree: pointer to the root node
 * @func:  pointer to a function to call for each node
 *
 * Return: Nothing
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

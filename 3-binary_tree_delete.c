/**
 * binary_tree_delete - function that deletes a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: Nothing
 */
#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

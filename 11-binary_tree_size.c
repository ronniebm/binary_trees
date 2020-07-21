#include "binary_trees.h"

/**
 * size_of - measures the size of a binary tree.
 * ----------------------------------------------------
 * @node: a pointer to the root node of the tree.
 *
 * Return: size of tree from the given node (a number).
 * ----------------------------------------------------
 */

int size_of(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else
		return (size_of(node->left) + size_of(node->right) + 1);
}

/**
 * binary_tree_size - measures the size of a binary tree.
 * ------------------------------------------------------
 * @tree: a pointer to the root node of the tree.
 *
 * Return: size of tree from the given node (a number).
 * ------------------------------------------------------
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree)
		return (0);

	size = size_of(tree);
	return (size);
}

#include "binary_trees.h"

/**
 * leaves_of - counts the leaves in a binary tree.
 * ----------------------------------------------------
 * @node: a pointer to a given node.
 *
 * Return: Number of leaves of the given node.
 * ----------------------------------------------------
 */

int leaves_of(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);

	else
		return (leaves_of(node->left) + leaves_of(node->right));
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * --------------------------------------------------------
 * @tree: a pointer to the root node of the tree.
 *
 * Return: Number of leaves of the given node.
 * --------------------------------------------------------
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree)
		return (0);

	size = leaves_of(tree);
	return (size);
}

#include "binary_trees.h"

/**
 * children_of - counts the nodes with at least 1
 * child in a binary tree.
 * ----------------------------------------------
 * @node: a pointer to a given node.
 *
 * Return: Number of nodes with at least 1 child.
 * ----------------------------------------------
 */

int children_of(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((!node->left && node->right) ||
		(node->left && !node->right))
		return (1);

	else
	{
		if (!node->parent)
			return (children_of(node->left) + children_of(node->right) + 1);
	}

	return (children_of(node->left) + children_of(node->right));
}

/**
 * binary_tree_nodes - counts the nodes with at least 1
 * child in a binary tree.
 * ----------------------------------------------------
 * @tree: a pointer to the root node of the tree.
 *
 * Return: Number of nodes with at least 1 child.
 * ----------------------------------------------------
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int size = 0;

	if (!tree)
		return (0);

	size = children_of(tree);
	return (size);
}

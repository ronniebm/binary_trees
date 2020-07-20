#include "binary_trees.h"


/**
 * is_a_root - checks wich nodes are root (with recursion).
 * --------------------------------------------------------
 * @node: a pointer to the provided node.
 *
 * Return: 1 if node is a root, 0 if not.
 * --------------------------------------------------------
 */

int is_a_root(const binary_tree_t *node)
{
	if (node->left)
		is_a_root(node->left);

	if (node->right)
		is_a_root(node->right);

	if (node->left && node->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_root - checks if a node is a root.
 * -------------------------------------------------
 * @node: a pointer to the node to check.
 *
 * Return: 1 if node is a root, 0 if not.
 * -------------------------------------------------
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int root = 0;

	if (node)
		root = is_a_root(node);

	return (root);
}

#include "binary_trees.h"


/**
 * is_a_leaf - checks wich nodes are leaf (with recursion).
 * --------------------------------------------------------
 * @node: a pointer to the provided node.
 *
 * Return: 1 if node is a leaf, 0 if not.
 * --------------------------------------------------------
 */

int is_a_leaf(const binary_tree_t *node)
{
	if (node->left)
		is_a_leaf(node->left);

	if (node->right)
		is_a_leaf(node->right);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * -------------------------------------------------
 * @node: a pointer to the node to check.
 *
 * Return: 1 if node is a leaf, 0 if not.
 * -------------------------------------------------
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node)
		leaf = is_a_leaf(node);

	return (leaf);
}

#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * -------------------------------------------------------
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: (1) if full binary tree, (0) Otherwise.
 * -------------------------------------------------------
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	/* Check if it's a leaf node. */
	if (!tree->left && !tree->right)
		return (1);

	/* Check if left-right are not NULL, and if subtrees are full. */
	if (tree->left && tree->right)
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
			return (1);

	/* Output if it's not a full tree. */
	return (0);

}

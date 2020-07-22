#include "binary_trees.h"

/**
 * binary_tree_postorder - traversing binary tree (post-order).
 * ------------------------------------------------------------
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 *
 * Return: void.
 * ------------------------------------------------------------
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* STEP 1. recursion on left subtree. */
	binary_tree_postorder(tree->left, func);

	/* STEP 2. recursion on right subtree. */
	binary_tree_postorder(tree->right, func);

	/* STEP 3. using node value */
	func(tree->n);
}

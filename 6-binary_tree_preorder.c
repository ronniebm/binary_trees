#include "binary_trees.h"

/**
 * binary_tree_preorder - traversing binary tree (pre-order).
 * ----------------------------------------------------------
 * @tree: a pointer to the root node of the tree to traverse.
 * @func: a pointer to a function to call for each node.
 *
 * Return: void.
 * ----------------------------------------------------------
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* STEP 1. printing value of node. */
	printf("%d\n", tree->n);

	/* STEP 2. recursion on left subtree. */
	binary_tree_preorder(tree->left, func);

	/* STEP 3. recursion on right subtree. */
	binary_tree_preorder(tree->right, func);
}
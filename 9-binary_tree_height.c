#include "binary_trees.h"


/**
 * height_of - measures node height (with recursion).
 * --------------------------------------------------------
 * @node: a pointer to the provided node.
 *
 * Return: height of each node.
 * --------------------------------------------------------
 */

int height_of(const binary_tree_t *node)
{
	int value = 0;

	if (node->left)
	{
		value += 1;
		height_of(node->left);
	}

	if (node->right)
	{
		value += 1;
		height_of(node->right);
	}

	return (value);
}

/**
 * binary_tree_height - measures the height of a node in a
 * binary tree.
 * ----------------------------------------------------------
 * @tree: a pointer to the root node of the tree to measure
 * the height.
 *
 * Return: height of a binary tree (a number).
 * ----------------------------------------------------------
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	height = height_of(tree);

	return (height);
}

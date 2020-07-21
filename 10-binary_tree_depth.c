#include "binary_trees.h"


/**
 * depth_of - depth node measure (with recursion).
 * -----------------------------------------------
 * @node: a pointer to the provided node.
 * @value: depth recursive value.
 *
 * Return: depth of a given node.
 * -----------------------------------------------
 */

int depth_of(const binary_tree_t *node, int value)
{
	if (node->parent)
	{
		value += 1;
		depth_of(node->parent, value);
	}

	if (!node->left && !node->right)
		value += 1;

	return (value);
}

/**
 * binary_tree_depth - measures the depth of a node in a
 * binary tree.
 * ----------------------------------------------------------
 * @tree: a pointer to the node to measure the depth.
 *
 * Return: depth of a node (a number) in a binary tree.
 * ----------------------------------------------------------
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	depth = depth_of(tree, depth);
	return (depth);
}

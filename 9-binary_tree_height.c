#include "binary_trees.h"


/**
 * height_of - measures node height (with recursion).
 * --------------------------------------------------------
 * @node: a pointer to the provided node.
 *
 * Return: height of each node.
 * --------------------------------------------------------
 */

size_t height_of(const binary_tree_t *node)
{

	size_t left, right;

	if (!node)
		return (0);

	left = height_of(node->left);
	right = height_of(node->right);

	return (((left > right) ? left : right) + 1);

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

	height = height_of(tree);

	return (height - 1);
}

#include "binary_trees.h"


/**
 * max_value - max value of two numbers.
 * -------------------------------------
 * @a: 1st number to be compared.
 * @b: 2nd number to be compared.
 *
 * Return: a if a >= b, else: b.
 * -------------------------------------
 */

int max_value(int a, int b)
{
	if (a >= b)
		return (a);

	else
		return (b);
}

/**
 * height_of - height node measure (with recursion).
 * -------------------------------------------------
 * @node: a pointer to the provided node.
 *
 * Return: height of a given node.
 * -------------------------------------------------
 */

int height_of(const binary_tree_t *node)
{
	int height = 0;

	if (!node)
		return (0);

	height = max_value(height_of(node->left), height_of(node->right)) + 1;

	return (height);
}

/**
 * binary_tree_balance - measures the balance factor of a
 * binary tree.
 * ---------------------------------------------------------
 * @tree: a pointer to the node to measure the balance from.
 *
 * Return: balance factor (left_height - right_height).
 * ---------------------------------------------------------
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);

	left_height = height_of(tree->left);
	right_height = height_of(tree->right);

	return (left_height - right_height);
}

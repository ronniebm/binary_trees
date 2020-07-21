#include "binary_trees.h"


/**
 * calc_depth - obtain the leftmost depth (iteratively)
 * ----------------------------------------------------
 * @tree: a pointer to the root node of tree to check.
 *
 * Return: leftmost depth of a given tree, to be used
 * later on as a comparative reference !.
 * ----------------------------------------------------
 */

int calc_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}


/**
 * perfect_tree - checks a binary perfect tree (recursion)
 * -------------------------------------------------------
 * @tree: a pointer to the root node of tree to check.
 * @val: the leftmost depth of the tree (to be compared).
 * @level: depth level for each recursion.
 *
 * Return: (1) if perfect tree, (0) Otherwise.
 * -------------------------------------------------------
 */

int perfect_tree(const binary_tree_t *tree, int val, int level)
{
	int result = 0;

	if (!tree)
		return (0);

	/* Check if it's a leaf node. */
	if (!tree->left && !tree->right)
	{
		/*then, it's depth must be same as 'val' */
		if (val == level + 1)
			return (1);
	}

	/* Check if node has one child missing */
	if (!tree->left || !tree->right)
		return (0);

	/* Check if the given tree is perfect */
	if ((perfect_tree(tree->left, val, level + 1) == 1) &&
		(perfect_tree(tree->right, val, level + 1) == 1))
		result = 1;

	return (result);

}


/**
 * binary_tree_is_perfect - checks a binary perfect tree
 * -----------------------------------------------------
 * @tree: a pointer to the root node of tree to check.
 *
 * Return: (1) if perfect tree, (0) Otherwise.
 * -----------------------------------------------------
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth = calc_depth(tree);
	int depth_level = 0;

	return (perfect_tree(tree, left_depth, depth_level));
}

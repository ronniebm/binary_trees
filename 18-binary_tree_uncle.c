#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * -------------------------------------------------
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to uncle node, otherwise: NULL.
 * -------------------------------------------------
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *a;
	binary_tree_t *b;

	if (!node || !node->parent->parent)
		return (NULL);

	else
	{
		a = node->parent->parent->left;
		b = node->parent->parent->right;
	}

	if ((a && a->left && (node->n != a->left->n)) &&
		(a && a->right && (node->n != a->right->n)))
		return (a);

	else if (a && !a->left && !a->right)
		return (a);

	else if ((b && b->left && (node->n != b->left->n)) &&
			 (b && b->right && (node->n != b->right->n)))
		return (b);

	else if (b && !b->left && !b->right)
		return (b);

	else
		return (NULL);

}

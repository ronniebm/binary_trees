#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * ---------------------------------------------------
 * @node: a pointer to the node to find the sibling.
 *
 * Return: a pointer to sibling node, otherwise: NULL.
 * ---------------------------------------------------
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	binary_tree_t *a;
	binary_tree_t *b;

	if (!node || !node->parent)
		return (NULL);

	else
		{
			a = node->parent->left;
			b = node->parent->right;
		}

	if (a && (node->n != a->n))
		return (a);

	else if (b && (node->n != b->n))
		return (b);

	else
		return (NULL);

}

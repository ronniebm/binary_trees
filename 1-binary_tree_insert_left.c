#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node.
 * -----------------------------------------------------------
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 *
 * Return: a pointer to the created node.
 * -----------------------------------------------------------
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = calloc(sizeof(binary_tree_t), 1);

	if (!parent || !new_node)
		return (NULL);

	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	new_node->n = value;


	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
	}


	return (new_node);
}

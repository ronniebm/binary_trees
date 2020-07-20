#include "binary_trees.h"


/**
 * _deleteTree - delete nodes in a binary tree with recursion.
 * -----------------------------------------------------------
 * @node: a pointer to the provided node.
 *
 * Return: void.
 * -----------------------------------------------------------
 */

void _deleteTree(binary_tree_t *node)
{
	if (node->left)
	{
		_deleteTree(node->left);
		free(node->left);
	}
	if (node->right)
	{
		_deleteTree(node->right);
		free(node->right);
	}
}

/**
 * binary_tree_delete - deletes an entire binary tree.
 * -----------------------------------------------------------
 * @tree: a pointer to the parent node of the node to create.
 *
 * Return: void.
 * -----------------------------------------------------------
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		_deleteTree(tree);
		free(tree);
	}
}

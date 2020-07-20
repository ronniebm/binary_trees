#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 * ---------------------------------------
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 * ---------------------------------------
 */

/*  Basic binary tree */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary search tree */
typedef struct binary_tree_s bst_t;

/* AVL tree */
typedef struct binary_tree_s avl_t;

/* Max binary heap */
typedef struct binary_tree_s heap_t;

/* HOLBERTON TASKS FUNCTIONS  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* TOOL FUNCTIONS */
void binary_tree_print(const binary_tree_t *);

#endif
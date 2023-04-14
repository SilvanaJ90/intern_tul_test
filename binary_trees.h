
#ifndef BINARY_H
#define BINARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Binary Search Tree */
typedef struct binary_tree_s binary_tree_t;

/* Macros */
#define MIN_VAL INT_MIN
#define MAX_VAL INT_MAX

/* Function that traverses the nodes of the binary search tree */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Function define is true or false binary_tree_bst */
bool is_bst(const binary_tree_t *root);
bool is_bst_helper(const binary_tree_t *node, int min_val, int max_val) ;

#endif /* BINARY H */

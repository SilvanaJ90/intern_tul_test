#include "binary_trees.h"

/**
 * binary_tree_node - check code
 * @parent:  pointer to the parent node of the node to create
 * @value:  value to put in the new node
 * Return: pointer to new node or NULL on failure
 *
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /* The new node is created*/
	binary_tree_t *newNode;

    /* Space is reserved for new node*/
	newNode = malloc(sizeof(binary_tree_t));

    /* Return null on failure */
	if (newNode == NULL)
		return (NULL);

    /* The parent pointer is assigned as the parent of the new node. */
	newNode->parent = parent;

    /* Is assigned as value of the new node. */
	newNode->n = value;

    /* The left pointer of the new node is set to null */
	newNode->left = NULL;

    /* The right pointer of the new node is set to null */
	newNode->right = NULL;


    /* Returns null in case of success */
	return (newNode);
}

/**
 * is_bst_helper - check code
 * @node: pointer to the current node in the tree.
 * @min_val: minimum value permitted for the current node.
 * @max_val: maximum value permitted for the current node
 * Return: true if the tree is a valid binary search tree, false otherwise.
 */

bool is_bst_helper(const binary_tree_t *node, int min_val, int max_val)
{
    /* If the node is null, then it is a valid binary search tree. */
    if (node == NULL)
    {
        return (true);
    }

    /* Check if the node value is within the allowed limits. */
    if (node->n < min_val || node->n > max_val)
    {
        return (false);
    }

    /* Recursively call the function for the left and right subtrees.*/
    return is_bst_helper(node->left, min_val, node->n - 1) &&
    is_bst_helper(node->right, node->n + 1, max_val);
}


/**
 * is_bst - check code
 * @root: pointer to the binary tree root
 * Return: Boolean indicating whether the given binary tree is a valid binary search tree or not.
 */

bool is_bst(const binary_tree_t *root)
{
    /* Call the auxiliary function with the initial limits of the tree. */
    return (is_bst_helper(root, INT_MIN, INT_MAX));
}

#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    binary_tree_t *root;
	bool is_bst_tree;
    root = binary_tree_node(NULL, 3);

    root->left = binary_tree_node(root, 5);
    root->left->left = binary_tree_node(root->left, 1);
    root->left->right = binary_tree_node(root->left, 4);

    root->right = binary_tree_node(root, 2);
    root->right->left = binary_tree_node(root->right, 6);

    is_bst_tree = is_bst(root);
    printf("%s\n", is_bst_tree ? "Si" : "No");

    return (0);
}

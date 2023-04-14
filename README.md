# BINARY SEARCH TREE

![This is an image](https://upload.wikimedia.org/wikipedia/commons/thumb/d/da/Binary_search_tree.svg/280px-Binary_search_tree.svg.png)

## Table of Contents

- [General requirements of the exercise](https://github.com/SilvanaJ90/intern_tul_test/edit/main/README.md#general-requirements-of-the-exercise)
- [General functionalities](https://github.com/SilvanaJ90/intern_tul_test/edit/main/README.md#general-functionalities)
- [Why did I choose this exercise and how did I solve it?](https://github.com/SilvanaJ90/intern_tul_test/edit/main/README.md#why-did-i-choose-this-exercise-and-how-did-i-solve-it)
- [How to Start It](https://github.com/SilvanaJ90/intern_tul_test/edit/main/README.md#how-to-start-it)
- [Authors](https://github.com/SilvanaJ90/intern_tul_test/edit/main/README.md#authors)


## General requirements of the exercise

- All files are compiled in Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89


## General functionalities




## Why did I choose this exercise and how did I solve it?
I found this exercise very interesting because at the beginning of my training as a software developer, I learned the C language and I remembered that I made a repository with several exercises of binary trees that can be found at the following link: [binary_trees](https://github.com/SilvanaJ90/holbertonschool-binary_trees).
I started to remember what the logic is like for running binary trees, in this case binary search tree.
To develop this exercise, I first started by creating a data structure:
```
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

typedef struct binary_tree_s binary_tree_t;
```
I defined macros for minimum and maximum values to compare code values.
```
#define MIN_VAL INT_MIN 
#define MAX_VAL INT_MAX
```
I defined the functions to be performed

 Function that traverses the nodes of the binary search tree 
```
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```
This code creates a new node for a binary search tree and assigns the following values to the new node:
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
newNode->parent = parent: assigns the parent pointer as the parent of the new node.
    - newNode->n = value: the value value is assigned as the value of the new node.
    - newNode->left = NULL: set the left pointer of the new node to null, since no nodes have been added to the left yet.
    - newNode->right = NULL: the right pointer of the new node is set to null, since no nodes have been added to the right yet.
In summary, these steps create a new node with a given value and set the left, right and parent pointers to null or to the value provided, as appropriate.

Function define is true or false binary_tree_bst
```
bool is_bst(const binary_tree_t *root);
bool is_bst_helper(const binary_tree_t *node, int min_val, int max_val) ;
```
These two functions verify that the ordering properties are satisfied for each node of the tree. A recursive auxiliary function is implemented that receives a node and the upper and lower limits of the allowed values for the subtree nodes.

Finally, although the exercise does not ask for it, a main is done with an example tree to validate if the program is returning the correct answer, in case the binary tree is a binary search tree or not.

## How to Start It
Execution
- Compile
```
gcc -Wall -Wextra -Werror -pedantic  main.c binary_tree_node.c -o 0-node
```
- Run
```
./0-node
```

## Languages and Tools:

<p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> </p>



## Authors
- Silvana Jaramillo
 <a href="https://linkedin.com/in/silvana-jaramillo" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="silvana-jaramillo" height="30" width="40" /></a>

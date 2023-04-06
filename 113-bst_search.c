#include "binary_trees.h"

/**
 * bst_search - searches for value in BST
 *
 * @tree: root of tree
 * @value: value to search for
 * Return: pointer to node with valuem or NULL
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	else if (tree->n > value)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}

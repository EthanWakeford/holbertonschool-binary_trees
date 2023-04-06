#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if valid tree
 *
 * @tree: pointer to root
 * Return: 1 if valid 0 if not
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (is_bst_rec(tree, INT_MIN, INT_MAX))
		return (1);
	else
		return (0);
}

/**
 * is_bst_rec - recursive function to help
 *
 * @tree: pointer to root
 * @min: min
 * @max: max
 * Return: max value
*/

int is_bst_rec(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	return (is_bst_rec(tree->left, min, tree->n - 1)
		   &&
		   is_bst_rec(tree->right, tree->n + 1,
					 max));
}

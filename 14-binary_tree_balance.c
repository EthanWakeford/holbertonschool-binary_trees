#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 *
 * @tree: root of the tree
 * Return: the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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

/**
 * binary_tree_height - gets the height of the tree
 *
 * @tree: root of tree
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

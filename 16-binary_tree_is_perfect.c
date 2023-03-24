#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 *
 * @tree: root of tree
 * Return: 1 if perfect, 0 if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;
	int height;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	if (size == (1 << (height + 1)) - 1)
		return (1);
	return (0);
}

#include "binary_trees.h"

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

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_size - gets size of bianry tree
 *
 * @tree: root of tree
 * Return: size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_right = 0, count_left = 0;

	if (tree == NULL)
		return (0);

	count_left = binary_tree_size(tree->left);
	count_right = binary_tree_size(tree->right);
	return (count_left + count_right + 1);
}

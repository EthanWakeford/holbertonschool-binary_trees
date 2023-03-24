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

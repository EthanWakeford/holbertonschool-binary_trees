#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with children
 *
 * @tree: root of tree
 * Return: the count
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int NodeCountLeft = 0;
	int NodeCountRight = 0;

	if (tree == NULL)
		return (0);
	NodeCountLeft = binary_tree_nodes(tree->left);
	NodeCountRight = binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (NodeCountLeft + NodeCountRight + 1);
}

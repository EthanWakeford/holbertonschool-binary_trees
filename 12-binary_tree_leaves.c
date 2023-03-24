#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a tree
 *
 * @tree: root of tree
 * Return: number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leafCountLeft = 0;
	int leafCountRight = 0;

	if (tree == NULL)
		return (0);
	leafCountLeft = binary_tree_leaves(tree->left);
	leafCountRight = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (leafCountLeft + leafCountRight);
}

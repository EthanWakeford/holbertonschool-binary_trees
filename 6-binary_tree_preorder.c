#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the tree
 *
 * @tree: pointer to root of tree
 * @func: function pointer to be ran on each node
 * Return: void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return (NULL);
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

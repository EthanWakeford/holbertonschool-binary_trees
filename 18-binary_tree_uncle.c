#include "binary_trees.h"

/**
 * binary_tree_uncle - returns the uncle of a node
 *
 * @node: node to find uncle of
 * Return: pointer to your uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	else
		uncle = node->parent->parent->left;
	return (uncle);
}

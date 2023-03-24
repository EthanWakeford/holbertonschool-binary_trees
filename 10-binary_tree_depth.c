#include "binary_trees.h"

/**
 * binary_tree_depth - returns the depth of the node
 *
 * @tree: pointer to node
 *Return: the depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	for (count = 0; tree->parent != NULL; tree = tree->parent, count++)
	{}
	return (count);
}

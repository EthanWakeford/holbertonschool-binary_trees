#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a new node to the left
 *
 * @parent: parent of new node
 * @value: value of new node
 * Return: pointer to new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}

	return (node);
}

#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a new node to the right
 *
 * @parent: parent of new node
 * @value: value of new node
 * Return: pointer to new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}

	return (node);
}

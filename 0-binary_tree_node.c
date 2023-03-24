#include "binary_trees.h"

/**
 * binary_tree_node - adds a new node into a binary tree
 *
 * @parent: parent node to add child to
 * @value: value of new node to add
 * Return: pointer to new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

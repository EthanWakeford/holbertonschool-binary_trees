#include "binary_trees.h"

/**
 * bst_insert - inserts value into tree
 *
 * @tree: pointer to root
 * @value: value to store in new node
 * Return: pointer to new node, or NULL on fail
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node = NULL;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		new_node = binary_tree_node(*tree, value);
		*tree = new_node;
		return (new_node);
	}
	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			new_node = binary_tree_node(*tree, value);
			(*tree)->left = new_node;
			return (new_node);
		}
		return (bst_insert(&(*tree)->left, value));
	}
	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			new_node = binary_tree_node(*tree, value);
			(*tree)->right = new_node;
			return (new_node);
		}
		return (bst_insert(&(*tree)->right, value));
	}
	return (NULL);
}

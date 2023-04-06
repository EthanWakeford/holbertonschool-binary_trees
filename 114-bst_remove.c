#include "binary_trees.h"

/**
 * min_value_node - gets the min node value
 *
 * @node: node to find min value leaf
 * Return: pointer to min value node
*/

bst_t *min_value_node(bst_t *node)
{
	bst_t *current = node;

	while (current && current->left != NULL)
		current = current->left;

	return (current);
}

/**
 * bst_remove - removes a node from tree
 *
 * @root: root of tree
 * @value: value to remove
 * Return: ponter to new root
*/

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp, *parent;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			free(root);
			return (NULL);
		}
		if (root->left == NULL)
			temp = root->right;
		else if (root->right == NULL)
			temp = root->left;
		else
		{
			temp = min_value_node(root->right);
			root->n = temp->n;
			root->right = bst_remove(root->right, temp->n);
			if (root->right != NULL)
				root->right->parent = root;
			return (root);
		}
		parent = root->parent;
		if (parent != NULL)
		{
			(parent != NULL) ? ((root == parent->left) ?
			(parent->left = temp) : (parent->right = temp)) : 0;
		}
		if (temp != NULL)
			temp->parent = parent;
		free(root);
		return (temp);
	}
	return (root);
}

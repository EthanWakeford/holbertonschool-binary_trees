#include "binary_trees.h"

/**
 * array_to_bst - builds BST from array
 *
 * @array: array to build from
 * @size: size of array
 * Returb: pointer to root of new tree, or NULL on failure
*/

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}

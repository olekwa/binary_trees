#include "binary_trees.h"
/**
 * bst_search - This searches for a value in the tree and return the node
 * @tree: The tree to be searched
 * @value: The value to be searched for
 * Return: the node with the value or NULL if the value is not in the tree
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *found;

	if (tree == NULL)
		return (NULL);

	if (value < tree->n)
	{
		found = bst_search(tree->left, value);
	}
	else if (value > tree->n)
	{
		found = bst_search(tree->right, value);
	}
	else if (value == tree->n)
		return ((bst_t *)tree);
	else
		return (NULL);
	return (found);
}

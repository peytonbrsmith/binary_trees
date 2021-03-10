#include "binary_trees.h"

/**
 * binary_tree_is_bst - check if tree is bst
 *
 * @tree: tree to check if BSt
 *
 * Return: 1 if yes
 * 0 if NULL or NO
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	const binary_tree_t *prev = NULL;

	if (tree)
	{
		if (!binary_tree_is_bst(tree->left))
			return (0);

		if (prev != NULL && tree->n <= prev->n)
			return (0);

		prev = tree;

		return (binary_tree_is_bst(tree->right));
	}
	return (1);
}

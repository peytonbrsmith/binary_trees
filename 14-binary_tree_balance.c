#include "binary_trees.h"

/**
 * find_height - finds the heighth of the tree
 * @tree: the tree
 *
 * Return: the height
*/
int find_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (-1);

	left = find_height(tree->left);
	right = find_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - checks tree balance
 *
 * @tree: the tree to check balance of
 *
 * Return: balancedness
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree == NULL)
		return (0);

	left += find_height(tree->left);
	right += find_height(tree->right);

	return (left - right);
}

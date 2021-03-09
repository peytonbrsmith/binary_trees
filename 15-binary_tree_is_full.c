#include "binary_trees.h"

/**
 * check_fullness - checks for fullness of tree
 * @node: the tree
 *
 * Return: 1 if tree or 0
 */

int check_fullness(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else if (node->left != NULL && node->right != NULL)
	{
		return (check_fullness(node->left) && check_fullness(node->right));
	}

	return (0);
}

/**
 * binary_tree_is_full - checks for fullness of tree
 * @tree: the tree
 *
 * Return: 1 if tree or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_fullness(tree));
}

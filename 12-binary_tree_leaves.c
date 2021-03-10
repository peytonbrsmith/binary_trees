#include "binary_trees.h"

/**
 * leaf_counter - keeps track of count
 *
 * @tree: tree to search for leaves
 *
 * Return: number of leaves
 */

int leaf_counter(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (leaf_counter(tree->left) +
			leaf_counter(tree->right));
}

/**
 * binary_tree_leaves - count how many leaves are in a binary tree
 *
 * @tree: tree to search for leaves
 *
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	count = leaf_counter(tree);

	return (count);
}

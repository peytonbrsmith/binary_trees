#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks is node is leaf
 *
 * @node: not to check for leafdom citizenship
 *
 * Return: 1 if leaf
 * 0 if not or if NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
	{
		if (node->parent->right == NULL || node->parent->left == NULL)
			return (1);
		else
			return (0);
	}

	return (0);
}

/**
 * leaf_counter - keeps track of count
 *
 * @tree: tree to search for leaves
 * @count: count of leaves
 *
 * Return: number of leaves
 */

int leaf_counter(const binary_tree_t *tree, int count)
{
	if (tree == NULL)
		return (count);

	if (binary_tree_is_leaf(tree) == 1)
	{
		count++;
		/* printf("count: %d\n", count); */
	}

	count = leaf_counter(tree->left, count);
	count = leaf_counter(tree->right, count);
	/* printf("after count: %d\n, tree node: %d\n", count, tree->n); */

	return (count);
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

	if (tree == NULL)
		return (0);

	count = leaf_counter(tree, count);

	return (count);
}

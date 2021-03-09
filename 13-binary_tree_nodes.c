#include "binary_trees.h"

/**
 * child_support - checks is node is leaf
 *
 * @node: not to check for leafdom citizenship
 *
 * Return: 1 if leaf
 * 0 if not or if NULL
 */

int child_support(const binary_tree_t *node)
{
	int alimony = 1;

	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (0);

	return (alimony);
}

/**
 * node_counter - keeps track of count
 *
 * @tree: tree to search for leaves
 * @count: count of leaves
 *
 * Return: number of nodes with one child
 */

int node_counter(const binary_tree_t *tree, int count)
{
	if (tree == NULL)
		return (count);

	if (child_support(tree) == 1)
	{
		count++;
		/* printf("count: %d\n", count); */
	}

	count = node_counter(tree->left, count);
	count = node_counter(tree->right, count);
	/* printf("after count: %d\n, tree node: %d\n", count, tree->n); */

	return (count);
}

/**
 * binary_tree_nodes - counts nodes with at least one child
 *
 * @tree: tree to check
 *
 * Return: number of nodes with one child
 * OR 0 if tree is NULL, or if no nodes fit criteria
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	count = node_counter(tree, count);

	return (count);
}

#include "binary_trees.h"

/**
 * find_depth - find depth of node
 *
 * @tree: node
 *
 * Return: depth value
 */

int find_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (-1);

	depth = find_depth(tree->parent);

	return (depth + 1);
}

/**
 * binary_tree_depth - find depth of node in tree
 *
 * @tree: node to find depth on
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (find_depth(tree));
}

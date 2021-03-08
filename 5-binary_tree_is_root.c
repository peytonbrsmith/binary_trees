#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 *
 * @node: node to check for rootdom
 *
 * Return: 1 if root
 * 0 if not or NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

#include "binary_trees.h"

/**
 * find_size - finds the heighth of the tree
 * @tree: the tree
 *
 * Return: the height
*/
int find_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);

	size += find_size(tree->left);
	size += find_size(tree->right);

	return (size + 1);
}
/**
 * binary_tree_size - call func on tree in height
 *
 * @tree: the tree to call on
 *
 * Return: the height
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (find_size(tree));
}

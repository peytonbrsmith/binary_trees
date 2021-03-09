#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 *
 * @node: node to find sibling of
 *
 * Return: sibling of node
 * OR NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}

/**
 * binary_tree_uncle - find uncle of node
 *
 * @node: node to find uncle of
 *
 * Return: uncle of node
 * OR NULL if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

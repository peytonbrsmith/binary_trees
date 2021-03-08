#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left child
 *
 * @parent: binary tree parent node of new node
 * @value: int value of node
 *
 * Return: pointer to new node
 * OR NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}

	return (new_node);
}

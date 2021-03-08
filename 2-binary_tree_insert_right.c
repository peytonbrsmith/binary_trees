#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right child
 *
 * @parent: binary tree parent node of new node
 * @value: int value of node
 *
 * Return: pointer to new node
 * OR NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}

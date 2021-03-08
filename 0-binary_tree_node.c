#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node on for a binary tree
 *
 * @parent: binary tree parent node of new node
 * @value: int value of node
 *
 * Return: pointer to new node
 * OR NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;

	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;

	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

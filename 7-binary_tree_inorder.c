#include "binary_trees.h"

/**
 * binary_tree_inorder - call func on tree in inorder
 *
 * @tree: the tree to call on
 * @func: the function pointer
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	(*func)(tree->n);

	binary_tree_inorder(tree->right, func);
}

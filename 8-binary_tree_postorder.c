#include "binary_trees.h"

/**
 * binary_tree_postorder - call func on tree in postorder
 *
 * @tree: the tree to call on
 * @func: the function pointer
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}

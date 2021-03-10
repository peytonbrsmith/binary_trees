#include "binary_trees.h"
/**
 * lca - finds lca
 * @root: the root of the tree
 * @first: the first node
 * @second: the second node
 *
 * Return: pointer to lca if it exists, else NULL
 */
binary_tree_t *lca(binary_tree_t *root, const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *left, *right;

	if (root == NULL)
		return (NULL);

	else if (root == first || root == second)
		return (root);

	left = lca(root->left, first, second);
	right = lca(root->right, first, second);

	if (left != NULL && right != NULL)
		return (root);
	else if (left != NULL)
		return (left);
	else
		return (right);

	return (NULL);
}
/**
 * binary_trees_ancestor - finds lca
 * @first: the first node
 * @second: the second node
 *
 * Return: pointer to lca if it exists, else NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *root;

	if (first == NULL || second == NULL)
		return (0);

	root = (binary_tree_t *)first;

	while (root->parent != NULL)
	{
		root = root->parent;
	}

	return (lca(root, first, second));
}

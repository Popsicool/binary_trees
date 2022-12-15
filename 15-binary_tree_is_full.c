#include "binary_trees.h"

/**
* binary_tree_is_full-  function that check if binary tree is full
* @tree: root node of tree
* Return: 1 if full or 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}

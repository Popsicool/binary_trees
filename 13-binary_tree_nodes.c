#include "binary_trees.h"
/**
* binary_tree_nodes- function that count number of nodes
* @tree: root node of tree
* Return: number of leaves
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

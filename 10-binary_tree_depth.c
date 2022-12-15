#include "binary_trees.h"
/**
* binary_tree_depth - function that measures the depth of a binary tree
* @tree: root node of tree
* Return: depth of the tree in size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		n++;
	}
	return (n);
}

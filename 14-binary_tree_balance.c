#include "binary_trees.h"

size_t binary_tree_height2(const binary_tree_t *tree);
/**
* binary_tree_balance-  function that measures
* the balance factor of a binary tree
* @tree: root node of tree
* Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	int total;

	if (tree == NULL)
		return (0);
	left = binary_tree_height2(tree->left);
	right = binary_tree_height2(tree->right);
	total = (int)left - (int)right;
	return (total);
}


/**
* binary_tree_height2 - function that measures the height of a binary tree
* @tree: root node of tree
* Return: height of the tree in size_t
*/

size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height2(tree->left);
	right = binary_tree_height2(tree->right);

	if (left >= right)
		return (left + 1);
	else
		return (right + 1);

}

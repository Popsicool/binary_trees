#include "binary_trees.h"

size_t binary_tree_height3(const binary_tree_t *tree);
size_t binary_tree_leaves3(const binary_tree_t *tree);
int _pow(int a, int b);
/**
* binary_tree_is_perfect-  function that check if binary tree is perfect
* @tree: root node of tree
* Return: 1 if perfect or 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = 0, n = 0, p = 0;

	if (tree == NULL)
		return (0);
	h = (int)binary_tree_height3(tree);
	n = (int)binary_tree_leaves3(tree);
	p = _pow(2, (h - 1));
	if (n == p)
		return (1);
	return (0);

}


/**
* binary_tree_height3 - function that measures the height of a binary tree
* @tree: root node of tree
* Return: height of the tree in size_t
*/

size_t binary_tree_height3(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height3(tree->left);
	right = binary_tree_height3(tree->right);

	if (left >= right)
		return (left + 1);
	else
		return (right + 1);

}

/**
* binary_tree_leaves3- function that count number of leaves
* @tree: root node of tree
* Return: number of leaves
*/

size_t binary_tree_leaves3(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves3(tree->left) + binary_tree_leaves3(tree->right));

}

/**
* _pow - calculate raise to power
* @a: number to be raised
* @b: power to be raised to
* Return: a raised to power of b
*/

int _pow(int a, int b)
{
	int result = a;
	int i = 1;

	while (i < b)
	{
		result *= b;
		i++;
	}
	return (result);
}

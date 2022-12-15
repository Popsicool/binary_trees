#include "binary_trees.h"
/**
* binary_tree_node - create binary tree node
* @parent: pointer to parent
* @value: value to be added
* Return: address of the tree node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

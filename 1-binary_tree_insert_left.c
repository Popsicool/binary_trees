#include "binary_trees.h"
/**
* binary_tree_insert_left - add node to left
* @parent: parent node
* @value: value of the node to add
* Return: pointer to the node or null
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left != NULL)
		new->left->parent = new;

	return (new);
}

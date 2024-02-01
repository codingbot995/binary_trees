#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds  uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         the parent is NULL, or if node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (NULL); /* Nodes parent not child of its grandparent, grands have no*/
}
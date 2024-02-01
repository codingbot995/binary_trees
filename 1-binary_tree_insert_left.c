#include "binary_trees.h"
/**
<<<<<<< HEAD
 * binary_tree_insert_left - Inserts a node
 * @parent: Pointer to the node to inser to  the left-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or Null in failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node =  malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
=======
 *binary_tree_insert_left - Inserts a node as a left-child 
 *@parent: A pointer to the node to insert the left-child in.
 *@value: The value to store in the new node.
 *Return: If parent is NULL or an error occurs - NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return(NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
>>>>>>> 6a78f37494713cb8ad9034e5290d0618e39ef941
}

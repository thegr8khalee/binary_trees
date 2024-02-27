#include "binary_trees.h"
/**
 * binary_tree_insert_left: ...
 * @parent: ...
 * @value: ...
 * Return: ...
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL); // Cannot insert into a NULL parent
    }
    binary_tree_t *newnode = NULL;
    newnode = binary_tree_node(parent, value);
    if (parent->left != NULL)
    {
        newnode->left = parent->left;
        parent->left = newnode;
        newnode->left->parent = newnode;
    }
    else
    {
        parent->left = newnode;
    }
    return (newnode);
}

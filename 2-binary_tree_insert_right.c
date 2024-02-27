#include "binary_trees.h"

/**
 * binary_tree_insert_left - ...
 * @parent: ...
 * @value: ...
 * Return: ...
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode = NULL;
    if (parent == NULL)
    {
        return (NULL);
    }
    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
    {
        return (NULL);
    }
    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;
    if (parent->right != NULL)
    {
        newnode->right = parent->right;
        parent->right = newnode;
        newnode->right->parent = newnode;
    }
    else
    {
        parent->right = newnode;
    }
    return (newnode);
}

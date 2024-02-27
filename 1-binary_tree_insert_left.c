#include "binary_trees.h"

/**
 * binary_tree_insert_left - ...
 * @parent: ...
 * @value: ...
 * Return: ...
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL);
    }
    binary_tree_t *newnode = NULL;
    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
    {
        return (NULL);
    }
    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;
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

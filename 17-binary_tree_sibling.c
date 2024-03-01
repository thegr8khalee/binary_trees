#include"binary_trees.h"

/**
 * binary_tree_sibling - binary_tree_sibling
 * @node: ...
 * Return: ...
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent;
    if (node == NULL) return (NULL);
    parent = node->parent;
    if (node->parent == NULL) return (NULL);
    if(parent->left == NULL || parent->right == NULL) return (NULL);
    else if (node == parent->left) return (parent->right);
    else return (parent->left);
}

#include "binary_trees.h"

/**
 * binary_tree_uncle - ...
 * @node: ...
 * Return: ...
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *gp;
    if (node == NULL) return (NULL);
    else if (node->parent == NULL) return (NULL);
    else if (node->parent->parent == NULL) return (NULL);
    else{
        gp = node->parent->parent;
        if (gp->left == NULL || gp->right == NULL) return (NULL);
        else if (gp->left == node->parent) return (gp->right);
        else return (gp->left);
    }
}

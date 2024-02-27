#include "binary_trees.h"

/**
 * binary_tree_is_root - ...
 * @node: ...
 * Return: ...
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    else{
        if(node->left != NULL && node->right != NULL)
            return (1);
        else
            return (0);
    }
}

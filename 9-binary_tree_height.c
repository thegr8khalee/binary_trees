#include "binary_trees.h"

/**
 * binary_tree_height - ...
 * @tree: ...
 * Return: ...
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree != NULL){
        int lefth = 0, righth = 0;
        if (tree->left != NULL)
            lefth = binary_tree_height(tree->left) + 1;
        if (tree->right != NULL)
            righth = binary_tree_height(tree->right) + 1;
        if (righth > lefth)
            return (righth);
        else   
            return (lefth);
    }
    else
        return (0);
}

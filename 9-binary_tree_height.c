#include "binary_trees.h"

/**
 * binary_tree_height - ...
 * @tree: ...
 * Return: ...
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t lefth, righth;
    if (tree == NULL)
        return (0);
    else{
        lefth = binary_tree_height(tree->left);
        righth = binary_tree_height(tree->right);
    }
    if(lefth >= righth)
        return (lefth + 1);
    else
        return (righth + 1);
}

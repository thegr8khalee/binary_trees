#include "binary_trees.h"

/**
 * binary_tree_balance - ...
 * @tree: ...
 * Return: ...
*/
int binary_tree_balance(const binary_tree_t *tree){
    int lefth, righth = 0;
    if (tree == NULL) return (0);
    else{
        lefth = binary_tree_height(tree->left);
        righth = binary_tree_height(tree->right);
        return (lefth - righth);
        }
}

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

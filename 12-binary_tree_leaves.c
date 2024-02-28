#include"binary_trees.h"

/**
 * binary_tree_leaves - ...
 * @tree: ...
 * Return: ...
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    int count = 0;
    if (tree == NULL) return (0);
    else{
        if (tree->left != NULL && tree->right != NULL){
            return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
        }
        else
            return (1);
    }
}

#include "binary_trees.h"

/**
 * binary_tree_depth - ...
 * @tree: ...
 * Return: ...
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    int depth = 0;
    if (tree == NULL)
        return (0);
    else
        while(tree->parent){
            tree = tree->parent;
            depth++;
        }
        return (depth);
}

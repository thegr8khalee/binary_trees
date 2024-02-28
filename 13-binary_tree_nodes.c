#include "binary_trees.h"

/**
 * binary_tree_nodes - ...
 * @tree: ...
 * Return: ...
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL) return (0);
    else return binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
}

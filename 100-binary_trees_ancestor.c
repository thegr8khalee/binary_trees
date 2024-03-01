#include "binary_trees.h"

/**
 * binary_trees_ancestor - ...
 * @first: ...
 * @second: ...
 * Return: ...
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *af, *as;
    if (first == NULL || second == NULL) return (NULL);
    if (first == second) return (first);
    af = first;
    as = second;
    while (as != af){
        if (af == NULL) af = second;
        else af = first->parent;
        if (as == NULL) as = first;
        else as = second->parent;
    }
    return (af);
}

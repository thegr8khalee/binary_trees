#include"binary_trees.h"

/**
 * binary_trees_ancestor - ...
 * @first: ...
 * @second: ...
 * Return: ...
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t* af, *as;
    if (first == NULL || second == NULL) return (NULL);
    if (first == second) return (first);
    while (first != NULL){
        while(second != NULL){
            if (af == as) return (as);
            as = second->parent;
        }
        af = first->parent;
    }
}

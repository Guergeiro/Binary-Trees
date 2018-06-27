/*
 * tree.h
 * Author: Breno
 */

#ifndef LIBRARIES_TREE_TREE_H_
#define LIBRARIES_TREE_TREE_H_

#include "../person/person.h"

struct tree {
	unsigned int n_nodes;
	struct person_node *root;
};

struct tree *new_tree();

void destruct_tree(struct tree *tree);

void print_tree_ascending_order(struct tree *tree);

void print_tree_descending_order(struct tree *tree);

void insert_node_tree(struct tree *tree, struct person_node *node);

#endif /* LIBRARIES_TREE_TREE_H_ */

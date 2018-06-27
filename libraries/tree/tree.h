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

#endif /* LIBRARIES_TREE_TREE_H_ */

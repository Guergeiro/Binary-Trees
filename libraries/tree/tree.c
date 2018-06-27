/*
 * tree.c
 * Author: Breno
 */

#include "tree.h"

#include <stdlib.h>

struct tree *new_tree() {
	return calloc(1, sizeof(struct tree));
}

void destruct_tree(struct tree *tree) {
	free(tree);
}

void print_tree_ascending_order(struct tree *tree) {
	if (tree) {
		print_nodes_ascending_order(tree->root);
	}
}

void print_tree_descending_order(struct tree *tree) {
	if (tree) {
		print_nodes_descending_order(tree->root);
	}
}

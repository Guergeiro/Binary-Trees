/*
 * tree.c
 * Author: Breno
 */

#include "tree.h"

#include <stdio.h>
#include <stdlib.h>

struct tree *new_tree() {
	return calloc(1, sizeof(struct tree));
}

void destruct_tree(struct tree *tree) {
	free(tree);
}

void print_tree_ascending_order(struct tree *tree) {
	if (tree) {
		if (tree->root) {
			print_nodes_ascending_order(tree->root);
		}
	}
}

void print_tree_descending_order(struct tree *tree) {
	if (tree) {
		if (tree->root) {
			print_nodes_descending_order(tree->root);
		}
	}
}

void insert_node_tree(struct tree *tree, struct person_node *node) {
	if (tree && node) {
		if (tree->root) {
			insert_node(tree->root, node);
		} else {
			tree->root = node;
		}
		tree->n_nodes++;
	}
}

void invert_tree(struct tree *tree) {
	if (tree) {
		if (tree->root) {
			invert_node(tree->root);
		}
	}
}

void search_tree_node(struct tree *tree, struct person_node *node) {
	if (tree && node) {
		if (tree->root) {
			struct person_node *result = search_node(tree->root, node);
			if (result) {
				print_person(result->data);
			} else {
				printf("\nNode doesn't exit");
			}
		} else {
			printf("\nNode doesn't exist");
		}
	}
	destruct_person_node(node);
}

unsigned int number_of_nodes(struct tree *tree) {
	if (tree) {
		return tree->n_nodes;
	}
	return 0;
}

unsigned int tree_height(struct tree *tree) {
	if (tree) {
		if (tree->root) {
			return max_node(tree->root);
		}
	}
	return 0;
}

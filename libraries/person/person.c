/*
 * person.c
 * Author: Breno
 */

#include "person.h"

#include <stdio.h>
#include <stdlib.h>

struct person_node *new_node() {
	return calloc(1, sizeof(struct person_node));
}

void destruct_person_node(struct person_node *node) {
	free(node->data->name);
	free(node->data);
	free(node);
}

void print_person(struct person *data) {
	printf("\nAge: %u\tName: %s", data->age, data->name);
}

void print_nodes_ascending_order(struct person_node *node) {
	if (node->left) {
		print_nodes_ascending_order(node->left);
	}
	print_person(node->data);
	if (node->right) {
		print_nodes_ascending_order(node->right);
	}
}

void print_nodes_descending_order(struct person_node *node) {
	if (node->right) {
		print_nodes_ascending_order(node->right);
	}
	print_person(node->data);
	if (node->left) {
		print_nodes_ascending_order(node->left);
	}
}

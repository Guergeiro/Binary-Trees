/*
 * person.h
 * Author: Breno
 */

#ifndef LIBRARIES_PERSON_PERSON_H_
#define LIBRARIES_PERSON_PERSON_H_

struct person {
	char *name;
	unsigned int age;
};

struct person_node {
	struct person *data;
	struct person_node *left;
	struct person_node *right;
};

struct person *new_person();

struct person_node *new_node(struct person *data);

void destruct_person_node(struct person_node *node);

void destruct_all_nodes(struct person_node *node);

void print_person(struct person *data);

void print_nodes_ascending_order(struct person_node *node);

void print_nodes_descending_order(struct person_node *node);

void insert_node(struct person_node *current, struct person_node *node);

void my_insert_node(struct person_node *current, struct person_node *node);

int compare_nodes(struct person_node *node1, struct person_node *node2);

#endif /* LIBRARIES_PERSON_PERSON_H_ */

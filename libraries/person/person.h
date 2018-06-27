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

struct person_node *new_node();

void destruct_person_node(struct person_node *node);

void print_person(struct person *data);

void print_nodes_ascending_order(struct person_node *node);

void print_nodes_descending_order(struct person_node *node);

#endif /* LIBRARIES_PERSON_PERSON_H_ */

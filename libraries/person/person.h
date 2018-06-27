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

#endif /* LIBRARIES_PERSON_PERSON_H_ */

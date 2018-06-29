/*
 * person.c
 * Author: Breno
 */

#include "person.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 256

struct person *new_person() {
	struct person *new_person = malloc(sizeof(struct person));
	printf("\nAge: ");
	scanf("%u", &new_person->age);
	printf("\nName: ");
	char aux[BUFFER];
	while ((getchar()) != '\n');
	//scanf("%[^\n]s", aux);
	fgets(aux, BUFFER, stdin);
	new_person->name = malloc(strlen(aux) * sizeof(char));
	aux[strlen(aux)-1] = '\0';
	strcpy(new_person->name, aux);
	return new_person;
}

struct person_node *new_node(struct person *data) {
	struct person_node *new_node = calloc(1, sizeof(struct person_node));
	new_node->data = data;
	return new_node;
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
		print_nodes_descending_order(node->right);
	}
	print_person(node->data);
	if (node->left) {
		print_nodes_descending_order(node->left);
	}
}

void insert_node(struct person_node *current, struct person_node *node) {
	if (compare_nodes(current, node) > 0) {
		if (current->left) {
			insert_node(current->left, node);
		} else {
			current->left = node;
		}
	} else {
		if (current->right) {
			insert_node(current->right, node);
		} else {
			current->right = node;
		}
	}
}

void my_insert_node(struct person_node *current, struct person_node *node) {
	struct person_node **temp;
	temp = &current;
	while (*temp){
		if (compare_nodes(*temp, node) > 0)
			temp = &((*temp)->left);
		else
			temp = &((*temp)->right);
	}
	*temp = node;
}

int compare_nodes(struct person_node *node1, struct person_node *node2) {
	return (node1->data->age - node2->data->age);
}

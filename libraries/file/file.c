/*
 * file.c
 * Author: Breno
 */

#include "file.h"
#include "../person/person.h"
#include "../macros/macros.h"

#include <string.h>

#define BUFFER 256
#define DELIMETER ","

void import_file(struct tree *tree, char *location) {
	FILE *file = fopen(location, "r");
	if (!file) {
		printf("\nImpossible to open file");
		PAUSE
		;
		return;
	}
	char buffer[BUFFER];
	char *aux;
	while (!feof(file)) {
		fgets(buffer, BUFFER, file);
		struct person *data = malloc(sizeof(struct person));
		aux = strtok(buffer, DELIMETER);
		data->age = atoi(aux);
		aux = strtok(NULL, DELIMETER);
		data->name = malloc((strlen(aux) + 1) * sizeof(char));
		strcpy(data->name, aux);
		insert_node_tree(tree, new_node(data));
	}
	fclose(file);
}

void export_file(struct tree *tree) {
	if (tree) {
		FILE *file = fopen("file.txt", "w");
		export_nodes_ascending_order(tree->root, file);
		fclose(file);
	}
}

void export_nodes_ascending_order(struct person_node *node, FILE *file) {
	if (node->left) {
		print_nodes_ascending_order(node->left);
	}
	fprintf(file, "%u\t%s", node->data->age, node->data->name);
	if (node->right) {
		print_nodes_ascending_order(node->right);
	}
}

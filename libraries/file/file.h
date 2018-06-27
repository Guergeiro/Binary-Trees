/*
 * file.h
 * Author: Breno
 */

#ifndef LIBRARIES_FILE_FILE_H_
#define LIBRARIES_FILE_FILE_H_

#include <stdio.h>
#include "../tree/tree.h"

/*
 *@param1: tree
 *@param2: location
 *@brief: imports file located @param2 to @param1
 *@return: void
 */
void import_file(struct tree *tree, char *location);

/*
 *@param: tree
 *@brief: exports @param to file
 *@return: void
 */
void export_file(struct tree *tree);

void export_nodes_ascending_order(struct person_node *node, FILE *file);

#endif /* LIBRARIES_FILE_FILE_H_ */

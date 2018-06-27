/*
 * main.c
 * Author: Breno
 */

#include "main.h"

#include <stdio.h>
#include <stdlib.h>

#if defined POSIX
#define CLEARSCR system ( "clear" )
#elif defined MSDOS || defined WIN32
#define CLEARSCR system ( "cls" )
#endif

int main(int argc, char **argv) {
	if (argc % 2) {
		CLEARSCR;
		printf("\n%s\t<file>", argv[0]);
		exit(1);
	}

	unsigned int op;
	do {
		op = menu();
		switch (op) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		}
	} while(op != 0);
}

int menu() {
	CLEARSCR;
	printf("\n(1) Insert new node");
	printf("\n(2) Remove a node");
	printf("\n(3) Search a node");
	printf("\n(4) Print all nodes (ascending order)");
	printf("\n(5) Print all nodes (descending order)");
	printf("\n(6) Number of nodes");
	printf("\n(7) Tree height");
	printf("\n(8) Import file");
	printf("\n(9) Export .txt file");
	printf("\n(0) Exit");
	printf("\n\nOption: ");
	unsigned int op;
	scanf("%d", &op);
	return op;
}

#include <stdlib.h>
#include <stdio.h>
#include "src/sort.h"


int mainsort(void)
{
	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int length = sizeof(a) / sizeof(int);
	
	

	int status = sort(a, length, "On2", SELECTION);
	printf("Status: %d\n", status);
	
	printf("Sorted: \n");
	

	return EXIT_SUCCESS;
}

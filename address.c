#include <stdio.h>	//printf
#include <stdlib.h> //atol

int main(int argc, char *argv[])	//command line argument count and vector
{
	unsigned long size;
	unsigned long address;
	unsigned long page_num;
	unsigned long offset;
	
	size = 4096; 				//sets page size to 4KB
	address = atol(argv[1]);	//converts the first string arg to a long int
	page_num = address / size;	//calculates the page number
	offset = address % size;	//calculates the offset
	
	printf("The address %lu contains:\n", address);
	printf("page number = %lu\n", page_num);
	printf("offset = %lu\n", offset);
	
	return 0;
}


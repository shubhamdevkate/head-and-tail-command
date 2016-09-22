#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[])
{
	FILE *fp;

	if(argc < 2){
		printf("Insufficient Arguments!!!");
		usage();
		return -1;
	}

	fp = fopen(argv[1], "r");

	if(fp == NULL){
		printf("\nCan't open %s file !!!\n", argv[1]);
		return 1;
	}

	if(argc == 2)
		nlines(fp, "10");
	else
		nlines(fp, argv[2]);	

	fclose(fp);

	return 0;
}

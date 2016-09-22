#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[])
{
	FILE *fp;

	if(argc < 2){
		printf("Insufficient Arguments!!!\n");
		printf("usage: <./programe> <file name> <No. of bytes>\n");
		return -1;
	}

	fp = fopen(argv[1], "r");

	if(fp == NULL){
		printf("Can't open %s file\n", argv[1]);
		return 1;
	}

	if(argc == 2)
		nbytes(fp, 10);
	else
		nbytes(fp, atoi(argv[2]));

	fclose(fp);

	return 0;
}

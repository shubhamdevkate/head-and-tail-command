#include <stdio.h>
#include <string.h>
#include "functions.h"

int main(int argc, char *argv[])
{
	int flag = 0;

	if(argc == 1){
		input();
	}

	if(argc == 2) 		
		nline(argv[1], "10");

	if(argc == 3) {
		if(strcmp(argv[2], "--h") == 0){
			copy(11);
			printfile(argv[1]);
		}
		else if(strcmp(argv[2], "-q") == 0)
			nline(argv[1], "10");

		else if(strcmp(argv[2], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			nline(argv[1], "10");
		}
		else if(strcmp(argv[2], "-z") == 0)
			printfile(argv[1]);

		else if(strcmp(argv[1], "-b") == 0){
			inputbytes(atoi(argv[2]));
		}
		else if(strcmp(argv[1], "-n") == 0){
			inputlines(atoi(argv[2]));	
		}
		else if(strcmp(argv[2], "-n") == 0){
			nline(argv[1], "10");
		}
		else if(strcmp(argv[2], "-b") == 0){
			nbyte(argv[1], atoi("10"));
		}
		else if(flag != 11){
			printf("==> %s <==\n", argv[1]);
			nline(argv[1], "10");
			printf("==> %s <==\n", argv[2]);
			nline(argv[2], "10");
		}
		resetflag();

	}

	if(argc == 4) {
		if(strcmp(argv[2], "-q") == 0)
			nline(argv[1], argv[3]);

		else if(strcmp(argv[3], "-q") == 0){
			nline(argv[1], "10");
			nline(argv[2], "10");
		}
		else if(strcmp(argv[2], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			nline(argv[1], argv[3]);
		}
		else if(strcmp(argv[3], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			nline(argv[1], "10");
			printf("==> %s <==\n", argv[2]);
			nline(argv[2], "10");
		}
		else if(strcmp(argv[3], "-z") == 0){
			printfile(argv[1]);
			printfile(argv[2]);
		}
		else if(strcmp(argv[2], "-n") == 0) {
			nline(argv[1], argv[3]);
		}
		else if(strcmp(argv[2], "-b") == 0) {
			nbyte(argv[1], atoi(argv[3]));
		}

	}

	if(argc == 5){
		if(strcmp(argv[3], "-q") == 0){
			nline(argv[1], argv[4]);
			nline(argv[2], argv[4]);
		}
		else if(strcmp(argv[3], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			nline(argv[1], argv[4]);
			printf("==> %s <==\n", argv[2]);
			nline(argv[2], argv[4]);
		}
		else if(strcmp(argv[4], "-z") == 0){
			printfile(argv[1]);
			printfile(argv[2]);
			printfile(argv[3]);
		}
	}

	if(argc == 6) {
		if(strcmp(argv[2], "-n") && strcmp(argv[4], ">"))
			copyline(argv[1], argv[3], argv[5]);

		else if(strcmp(argv[2], "-n") && strcmp(argv[4], ">>")){
			copy(1);
			copyline(argv[1], argv[3], argv[5]);
		}

		else if(strcmp(argv[2], "-b") && strcmp(argv[4], ">"))
			copybyte(argv[1], argv[3], argv[5]);

		else if(strcmp(argv[2], "-b") && strcmp(argv[4], ">>")){
			copy(2);
			copybyte(argv[1], argv[3], argv[5]);
		}

	}

	if(argc == 7) {
		if((strcmp(argv[2],"-n") == 0) && (strcmp(argv[4], "-n"))) {
			printf("==> %s <==\n", argv[1]);
			nline(argv[1], argv[3]);
			printf("==> %s <==\n", argv[4]);
			nline(argv[4], argv[6]);
		}

	}

	return 0;
}

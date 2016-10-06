#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[])
{

	if(argc == 4){
		if(strcmp(argv[2], "-b") == 0){

			t_nbyte(argv[1], atoi(argv[3]));
		}
	}
	return 0;	
}

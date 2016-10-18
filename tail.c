#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[])
{

	if(argc == 1){
		copy(1);
		input();
	}

	if(argc == 4){
		if(strcmp(argv[2], "-q") == 0){
			t_nlines(argv[1], atoi(argv[3]));
		}
		else if(strcmp(argv[3], "-q") == 0){
			t_nlines(argv[1], 10);
			t_nlines(argv[2], 10);
		}
		else if(strcmp(argv[2], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			t_nlines(argv[1], atoi(argv[3]));
		}
		else if(strcmp(argv[3], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			t_nlines(argv[1], 10);
			printf("==> %s <==\n", argv[2]);
			t_nlines(argv[2], 10);
		}
		else if(strcmp(argv[3], "-z") == 0){
			printfile(argv[1]);
			printfile(argv[2]);
		}

		else if(strcmp(argv[2], "-b") == 0){

			t_nbyte(argv[1], atoi(argv[3]));
		}

		else if(strcmp(argv[2], "-n") == 0){
			t_nlines(argv[1], atoi(argv[3]));
		} 
	}

	if(argc == 5){
		if(strcmp(argv[3], "-q") == 0){
			t_nlines(argv[1], atoi(argv[4]));
			t_nlines(argv[2], atoi(argv[4]));
		}
		else if(strcmp(argv[3], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			t_nlines(argv[1], atoi(argv[4]));
			printf("==> %s <==\n", argv[2]);
			t_nlines(argv[2], atoi(argv[4]));
		}
		else if(strcmp(argv[4], "-z") == 0){
			printfile(argv[1]);
			printfile(argv[2]);
			printfile(argv[3]);
		}


	}

	if(argc == 3){
		if(strcmp(argv[2], "--h") == 0){
			printfile(argv[1]);
		}
		if(strcmp(argv[2], "-q") == 0){
			t_nlines(argv[1], 10);
		}
		else if(strcmp(argv[2], "-v") == 0){
			printf("==> %s <==\n", argv[1]);
			t_nlines(argv[1], 10);
		}
		else if(strcmp(argv[2], "-z") == 0){
			printfile(argv[1]);
		}
		else if(strcmp(argv[1], "-b") == 0){
			input();
		}
		else if(strcmp(argv[1], "-n") == 0){
			input();
		}
		else if(strcmp(argv[2], "-b") == 0){
			t_nbyte(argv[1], -1); //if no. of bytes is not mentioned by user, second argument to the function is -1
		}
	}

	if(argc == 6){
		if(strcmp(argv[4], ">") == 0){
			if(strcmp(argv[2], "-n") == 0){
				t_copyline(argv[1], atoi(argv[3]), argv[5]);
			}
			else if(strcmp(argv[2], "-b") == 0){
				t_copybyte(argv[1], atoi(argv[3]), argv[5]);
			} 
		}
		else{
			if(strcmp(argv[4], ">>") == 0){
				if(strcmp(argv[2], "-n") == 0){
					copy(1);
					t_copyline(argv[1], atoi(argv[3]), argv[5]);
				}
				else if(strcmp(argv[2], "-b") == 0){
					copy(1);
					t_copybyte(argv[1], atoi(argv[3]), argv[5]);
				}
			}
		}
	}

	return 0;	
}

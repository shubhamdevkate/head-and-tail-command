#include <stdio.h>
#include "functions.h"

int main(int argc, char *argv[])
{

	if(argc == 1){
		copy(1);
		input();
	}

	if(argc == 4){
		if(strcmp(argv[2], "-b") == 0){

			t_nbyte(argv[1], atoi(argv[3]));
		}

		else if(strcmp(argv[2], "-n") == 0){
			t_nlines(argv[1], atoi(argv[3]));
		} 
	}

	if(argc == 3){
		if(strcmp(argv[1], "-b") == 0){
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

#include <stdio.h>
#include "file.h"

char ch, *line;
int i = 0, len = 0, cnt = 0;

void usage(void);

void usage(){
	printf("usage:  1. <programe name> <file name> <No.>\n");
}

void nbytes(FILE * fp, int x){
	while(i < x){
		fread(&ch, 1, 1, fp);
		printf("%c", ch);
		i++;
	}
}

void nlines(FILE *fp, char *s){
	while(getline(&line, &len, fp) != -1){
		cnt++;
		if(cnt > atoi(s))
			break;

		printf("%s", line);
	}
}

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int flag = 0;

void copy(int x) {
	flag = x;
}

int nline(char *file, char *opt) {

	FILE *fp;
	int len = 0, cnt = 0;
	char *line;

	fp = fopen(file, "r");

	if(fp == NULL){
		printf("\nCan't open %s file !!!\n", file);
		return -1;
	}

	while(getline(&line, &len, fp) != -1){
		cnt++;
		if(cnt > atoi(opt))
			break;

		printf("%s", line);
	}

	fclose(fp);
	return 0;
}

int nbyte(char *file, int x) {

	FILE *fp;
	int i = 0;
	char ch;

	fp = fopen(file, "r");
	if(fp == NULL){
		printf("\nCan't open %s file !!!\n", file);
		return -1;
	}
	while(i < x) {
		fread(&ch, 1, 1, fp);
		printf("%c", ch);
		i++;
	}
	fclose(fp);
	return 0;
}

int copyline(char *src, char *no, char *target) {
	FILE *fp1, *fp2;
	char  ch;
	int i = 0;

	fp1 = fopen(src, "r");

	if(fp1 == NULL){
		printf("\nCan't open %s file !!!\n", src);
		return -1;
	}

	if(flag == 1)
		fp2 = fopen(target, "a");
	else 
		fp2 = fopen(target, "w");

	if(fp2 == NULL){
		printf("\nCan't open %s file !!!\n", target);
		return -1;
	}

	while(i < atoi(no)) {
		fread(&ch, 1, 1, fp1);
		if(ch == '\n')
			i = i + 1;
		fwrite(&ch, 1, 1, fp2);
	}

	fclose(fp1);
	fclose(fp2);

}

int copybyte(char *src, char *no, char *target) {
	FILE *fp1, *fp2;
	char  ch;
	int i = 0;

	fp1 = fopen(src, "r");

	if(fp1 == NULL){
		printf("\nCan't open %s file !!!\n", src);
		return -1;
	}

	if(flag == 2)
		fp2 = fopen(target, "w");
	else 
		fp2 = fopen(target, "a");

	if(fp2 == NULL){
		printf("\nCan't open %s file !!!\n", target);
		return -1;
	}

	while(i < atoi(no)) {
		i++;
		fread(&ch, 1, 1, fp1);
		fwrite(&ch, 1, 1, fp2);
	}

	fclose(fp1);
	fclose(fp2);

}

//functions for tail command
int t_nbyte(char *file, int n){
	FILE *fp;
	long int len;
	char ch;

	fp = fopen(file, "r");

	if(fp == NULL){
		printf("\nCan't open %s file !!!\n", file);
		return -1;
	}

	fseek(fp, 0, SEEK_END);
	len = ftell(fp);
	fseek(fp, (len - n), SEEK_SET);

	do{
		ch = fgetc(fp);
		putchar(ch);

	}while(ch != EOF);

	fclose(fp);
}

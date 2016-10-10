#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

void init(){
	head = tail = NULL;
}

void push(int val){
	stack *tmp = (stack *)malloc(sizeof(stack));
	tmp->val = val;

	if(head == NULL){
		tail = head = tmp;
		tmp->next = NULL;
		return;
	}

	tail->next = tmp;
	tail = tmp;
	tmp->next = NULL;
	return;
}

int pop(){
	int val;
	stack *p = head;

	if(head == NULL)
		return 0;

	val = tail->val;

	if(p->next != NULL){

		while(p->next != tail)
			p=p->next;

		tail = p;
		free(p->next);
		p->next = NULL;
		return val;
	}

	free(p);
	head = NULL;
	return val;
}

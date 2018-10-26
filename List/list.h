#ifndef LIST_H_
#define LIST_H_
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	struct node *nextNode;
	int value;
}node;

typedef struct{
	node *head;
}list;


int push_back(list *list_p, int data);
void clear(list *list_p);
void print(const list *list_p);

#endif /* LIST_H_ */

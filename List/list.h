#ifndef LIST_H_
#define LIST_H_
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
typedef struct{
	int value;
	struct node *nextNode;
}node;

typedef struct{
	node *head;
}list;


int insert(list* _pList, int data);
void clearNode(list* _pList);
void printList(const list* _pPrintList);

#endif /* LIST_H_ */

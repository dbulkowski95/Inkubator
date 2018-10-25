#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct{
	size_t value;
	struct node *nextNode;
}node;

typedef struct{
	node *head;
}list;

int listPush(list* _pList, size_t data){
	assert(_pList != NULL); //precondition
	node *currentNode = _pList->head;
	if(_pList->head == NULL){
		_pList->head = malloc(sizeof(node));
		_pList->head->value = data;
		_pList->head->nextNode = NULL;
		return 0;
	}
	while(currentNode->nextNode != NULL){
		currentNode = (node*)currentNode->nextNode;
	}
	currentNode->nextNode = malloc(sizeof(currentNode));
	currentNode = (node*)currentNode->nextNode;
	currentNode->value = data;
	return 0;
}

void clearNode(list* _pList){
	node *_clearNodes = _pList->head;
	node *_tempNode = NULL;
	while(_clearNodes != NULL){
		_tempNode = (node*)_clearNodes->nextNode;
		free(_clearNodes);
		_clearNodes = NULL;
		_clearNodes = _tempNode;
	}
//	_clearNodes = NULL;
//	free(_clearNodes);
//	_tempNode = NULL;
//	free(_tempNode);
}

void printList(const list* _pPrintList){
	node *printList = _pPrintList->head;
	while(printList != NULL){
		printf("|Head->value: %zu|\n",printList->value);
		printf("|H->ptr:\t%p|\n",printList->nextNode);
		printList = (node*)printList->nextNode;
	}
}

int main(){
	list *_hPtr = NULL;
	_hPtr = malloc(sizeof(list));
	listPush(_hPtr,10);
	listPush(_hPtr,20);
	listPush(_hPtr,30);
	listPush(_hPtr,40);
	listPush(_hPtr,50);
	printList(_hPtr);
	clearNode(_hPtr);
	printList(_hPtr);
	free(_hPtr);
	return 0;
}


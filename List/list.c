#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"


int insert(list* _pList, size_t data){
	assert(_pList != NULL); //precondition
	node *_currentNode = _pList->head;
	if(_pList->head == NULL){
		_pList->head = malloc(sizeof(node));
		_pList->head->value = data;
		_pList->head->nextNode = NULL;
		return 0;
	}
	while(_currentNode->nextNode != NULL){
		_currentNode = (node*)_currentNode->nextNode;
	}
	_currentNode->nextNode = malloc(sizeof(_currentNode));
	_currentNode = (node*)_currentNode->nextNode;
	_currentNode->value = data;
	return 0;
}

void clearNode(list* _pList){
	assert(_pList != NULL); //precondition
	node *_clearNodes = _pList->head;
	node *_tempNode = NULL;
	while(_clearNodes != NULL){
		_tempNode = (node*)_clearNodes->nextNode;
		free(_clearNodes);
		_clearNodes = NULL;
		_clearNodes = _tempNode;
	}
}

void printList(const list* _pPrintList){
	assert(_pPrintList!=NULL);
	node *_printList = _pPrintList->head;
	while(_printList != NULL){
		printf("|Head->value: %zu|\n",_printList->value);
		printf("|H->ptr:%p|\n",_printList->nextNode);
		_printList = (node*)_printList->nextNode;
	}
}

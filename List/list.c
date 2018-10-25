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

void headGraph(int nodeValue, node* ptr){
	printf("-------------------------\n");
	printf("|\t\t\t|\n");

	printf("|Head->value: %10.2d|\n",nodeValue);
	printf("|H->ptr:\t%p|\n",ptr);

	printf("|\t\t\t|\n");
	printf("-------------------------\n");
}

void nodeArrow(){
	printf("\t|\n");
	printf("\t|\n");
	printf("\t|\n");
	printf("\tv\n");
}

//void printlist(list* ptrToNode){
//	printf("%p\n", ptrToNode->head);
//}
//
//void printNode(node* ptrToNode){
//	printf("%d\n", ptrToNode->value);
//	printf("%p\n", ptrToNode->nextNode);
//}

int listPush(list* _pList, size_t data){
	assert(_pList != NULL); //precondition
//	node *currentNode = NULL;
	node *currentNode = _pList->head;
	if(_pList->head == NULL){
		_pList->head = malloc(sizeof(node));
		_pList->head->value = data;
		_pList->head->nextNode = NULL;
//		printlist(_pList);
//		printNode(_pList->head);
//		headGraph(_pList->head->value,_pList->head);
//		nodeArrow();
		return 0;
	}
//	currentNode = _pList->head;
//	printf("->%d\n",currentNode->value);
//	printf("->%p\n",currentNode->nextNode);
	currentNode->nextNode = malloc(sizeof(currentNode));
	while(currentNode->nextNode != NULL){
		currentNode->value = data;
//		headGraph(currentNode->value,(node*)currentNode->nextNode);
//		nodeArrow();
		currentNode = (node*)currentNode->nextNode;
		return 0;
	}
	return 0;
}

void clearNode(list* _pList){
	node *clearNodes = _pList->head;
	node *_tempNode = NULL;
	while((clearNodes->nextNode != NULL)){
//		assert(clearNodes->nextNode == NULL);
		if(clearNodes->nextNode == NULL){
			_tempNode = clearNodes;
			clearNodes = NULL;
			free(clearNodes);
		}
		else{
			clearNodes = (node*)clearNodes->nextNode;
		}
	clearNodes = _tempNode;
	}
}

//void print(list* _pPrintList){
//	node *printList = _pPrintList->head;
//
//}

int main(){
	list *_hPtr = NULL;
	_hPtr = malloc(sizeof(list));
	listPush(_hPtr,10);
//	clearNode(_hPtr->head);
	listPush(_hPtr,20);
//	clearNode(_hPtr->head);
//	listPush(_hPtr,30);
	clearNode(_hPtr);
//	clearNode(_hPtr->head);
//	listPush(_hPtr,40.5);
//	listPush(_hPtr,'c');
	return 0;
}


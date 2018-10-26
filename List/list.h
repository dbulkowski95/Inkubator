#ifndef LIST_H_
#define LIST_H_

typedef struct{
	size_t value;
	struct node *nextNode;
}node;

typedef struct{
	node *head;
}list;


int insert(list* _pList, size_t data);
void clearNode(list* _pList);
void printList(const list* _pPrintList);

#endif /* LIST_H_ */

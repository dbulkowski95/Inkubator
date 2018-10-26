#include "list.h"

int main(){
	list *_hPtr = malloc(sizeof(list));
	insert(_hPtr,10);
	insert(_hPtr,20);
	insert(_hPtr,30);
	insert(_hPtr,40);
	insert(_hPtr,50);

	printList(_hPtr);
	printf("\n");
	clearNode(_hPtr);
	//printList(_hPtr);
	free(_hPtr);
	return 0;
}

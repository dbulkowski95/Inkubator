#include "list.h"

int main(){
	list *list_p = malloc(sizeof(list));
	list_p->head = NULL;
	push_back(list_p,10);
	push_back(list_p,20);
	push_back(list_p,30);
	push_back(list_p,40);
	push_back(list_p,50);

	print(list_p);
	printf("\n");
	clear(list_p);
	free(list_p);
	return 0;
}

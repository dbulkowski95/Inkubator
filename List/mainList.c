#include "list.h"
#include <stdlib.h>

int main(void){
//	list *list_p = init();
//	push_back(list_p,10);
//	push_back(list_p,20);
//	push_back(list_p,30);
//	push_back(list_p,40);
//	push_back(list_p,50);
//
//	pop_front(list_p);
//	pop_front(list_p);
//	pop_front(list_p);
//	pop_back(list_p);
//	pop_back(list_p);
//	pop_back(list_p);
//	pop_back(list_p);
//	pop_back(list_p);
//	pop_front(list_p);
//
//	print(list_p);
//	clear(list_p);

	list *list_p = init();
//	print(list_p);
	for(size_t i = 0;i<3;i++){
		push_back(list_p,i);
	}
	print(list_p);
	clear(list_p);
	print(list_p);
	free(list_p);

	return 0;
}

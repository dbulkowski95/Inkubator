#include "list.h"
#include <criterion.h>
#include <stdio.h>
#include <assert.h>


//Test(InitAndClear, init)
//{
//	list *list_p = NULL;
//	pop_back(list_p);
//	push_back(list_p,1);
//	push_back(list_p,2);
//	push_back(list_p,3);
//	pop_back(list_p);
//	pop_front(list_p);
//	clear(list_p);
//	pop_front(list_p);
//	pop_back(list_p);
//}
//
//Test(InitAddClear, init)
//{
//	list *list_p = init();
//	push_back(list_p,1);
//	clear(list_p);
//}


//Test(simpleTestSuite, pushLotOfNumbers)
//{
//	static int counter = 0;
//	list *list_p = init();
//	for(size_t i = 0;i<1000;i++){
//		push_back(list_p,i);
//		counter++;
//	}
//	for(size_t i = 0;i<500;i++){
//		pop_back(list_p);
//		counter--;
//	}
//	clear(list_p);
//	printf("->%d\n", counter);
//}

//Test(simpleTestSuite, PrintBeforePush)
//{
//	list *list_p = init();
////	print(list_p);
//	for(size_t i = 0;i<10;i++){
//		push_back(list_p,i);
//	}
//	print(list_p);
//	clear(list_p);
//	print(list_p);
//}



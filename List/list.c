#include "list.h"


int push_back(list *list_p, int data){
	assert(list_p != NULL); //precondition
	if(list_p->head == NULL){
		list_p->head = malloc(sizeof(node));
		list_p->head->value = data;
		list_p->head->nextNode = NULL;
		return 0;
	}
	node *current_node_p = list_p->head;
	while(current_node_p->nextNode != NULL){
		current_node_p = current_node_p->nextNode;
	}
	current_node_p->nextNode = malloc(sizeof(node));
	current_node_p = current_node_p->nextNode;
	current_node_p->value = data;
	current_node_p->nextNode = NULL;
	return 0;
}

void clear(list *list_p){
	assert(list_p != NULL); //precondition
	node *clear_node_p = list_p->head;
	node *temp_node_p = NULL;
	while(clear_node_p != NULL){
		temp_node_p = clear_node_p->nextNode;
		free(clear_node_p);
		clear_node_p = NULL;
		clear_node_p = temp_node_p;
	}
}

void print(const list *print_p){
	assert(print_p!=NULL);
	node *print_list_p = print_p->head;
	while(print_list_p != NULL){
		printf("|Head->value: %d|\n",print_list_p->value);
		printf("|H->ptr:%p|\n",print_list_p->nextNode);
		print_list_p = print_list_p->nextNode;
	}
}

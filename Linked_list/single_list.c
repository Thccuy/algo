#include <stdio.h>
#include <stdlib.h>
typedef struct single_list
{
	int data;
	struct single_list* next;
}Linklist;

void output(Linklist* head)
{
	Linklist* temp = head->next;
	while(temp->next != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

void insert(Linklist* head, Linklist* elem,int sub_number)
{
	Linklist* temp = head->next;
	for(int i=0;;i++) //search
	{
		if(i == sub_number)
			break;
		temp = temp->next;
	}
	elem->next = temp->next;
	temp->next = elem;
}

void del(Linklist* head, int sub_number)
{
	for(int i=-1;;i++) //search
	{
		if(i == sub_number-1)
			break;
		head = head->next;
	}
	Linklist* temp = head->next;
	head->next=head->next->next;
	free(temp);
}
int main()
{
	Linklist* head = (Linklist*)malloc(sizeof(Linklist));
	head->next = NULL;
	Linklist* temp = head;
	for(int i=0;i<10;i++)
	{
		Linklist* new_node = (Linklist*)malloc(sizeof(Linklist));
		new_node->next = temp->next;
		temp->next = new_node;
		temp = new_node;
		temp->data = i;
	}
	
	Linklist* new_node = (Linklist*)malloc(sizeof(Linklist));
	new_node->data = 666;
	insert(head,new_node,3);
	
	del(head,4);
	output(head);
	return 0;	
}

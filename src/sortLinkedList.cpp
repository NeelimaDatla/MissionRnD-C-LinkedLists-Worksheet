/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *ptr = head;
	struct node *ptr2;
	struct node *ptr3;
	if (ptr == NULL)
		return NULL;
	for (; ptr->next != NULL; ptr = ptr->next)
	{
		for (ptr2 = ptr->next; ptr2 != NULL; ptr2 = ptr2->next)
		{
			if (ptr->num > ptr2->num)
			{
				int temp = ptr->num;
				ptr->num = ptr2->num;
				ptr2->num = temp;
			}
		}
	}
	return head;
}
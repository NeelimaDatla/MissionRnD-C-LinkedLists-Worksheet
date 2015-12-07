/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL)
		return NULL;
	if (K <= 0)
		return NULL;
	if (K == 1)
		return NULL;
	struct node *ptr = head;
	int count = 1;
	while (ptr != NULL){
		count++;
		if (count == K){
			count = 1;
			if (ptr->next == NULL)
				continue;
			else
				ptr->next = ptr->next->next;
		}
		ptr = ptr->next;
	}
	return head;
}
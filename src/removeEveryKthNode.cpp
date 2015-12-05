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
	struct node *ptr = head;
	if (K <= 0)
		return NULL;
	while (ptr != NULL){
		if (K == 1){
			ptr->next = ptr->next->next;
			break;
		}
		K--;
		ptr = ptr->next;
	}
	return NULL;
}
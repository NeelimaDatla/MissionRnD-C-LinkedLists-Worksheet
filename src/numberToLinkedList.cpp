/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	typedef struct node NODE;
	NODE *head = NULL;
	NODE *cur;
	if (N < 0)
		N = -N;
	if (N == 0){
		cur = (NODE*)malloc(sizeof(NODE));
		cur->num = 0;
		cur->next = NULL;
		cur->next = head;
		head = cur;
		return head;
	}
	while (N > 0){
		cur = (NODE*)malloc(sizeof(NODE));
		cur->num = N % 10;
		cur->next = NULL;
		N = N / 10;
		cur->next = head;
		head = cur;
	}
	return head;
}
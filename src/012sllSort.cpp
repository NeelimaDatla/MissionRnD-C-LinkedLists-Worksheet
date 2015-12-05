/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *ptr = head;
		ptr = head;
		int count1 = 0;
		int count2 = 0;
		int count0 = 0;
		while (ptr != NULL){
			if (ptr->data == 1)
				count1++;
			else if (ptr->data == 2)
				count2++;
			else
				count0++;
			ptr = ptr->next;
		}
		ptr = head;
		while (ptr != NULL){
			if (count0 > 0){
				ptr->data = 0;
				count0--;
			}
			else if (count1 > 0){
				ptr->data = 1;
				count1--;
			}
			else{
				ptr->data = 2;
				count2--;
			}
			ptr = ptr->next;
		}
}
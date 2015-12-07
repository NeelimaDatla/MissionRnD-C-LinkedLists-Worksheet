/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	int count = 0;
	struct node *ptr = head;
	struct node *ptr3 = head;
	int res = 0;
	int val = 0;
	while (ptr != NULL)
	{
		ptr->digit1 = ((ptr->digit1 * 10) + ptr->digit2);
		ptr = ptr->next;
	}
	val = 4;
	while (ptr3 != NULL){
		if (ptr3->next == NULL){
			res += ptr3->digit1;
			break;
		}
		else{
			int power = 1;
			int i;
			for (i = 0; i < val; i++)
				power *= 10;
			res += (ptr3->digit1) * power;
			val /= 2;
		}
		ptr3 = ptr3->next;
	}
	return res;
}
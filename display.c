#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "phonebook.h"

// Function to Traverve through the linked list and display the contents of each node
void display(Node_t *head)
{
	Node_t* p = head;
	if (NULL == p)
	{
		printf("\n\tPhonebook has No Contacts!\n\n");
		return;
	}

	printf("\n\t%-20s\t\t%-20s\t%-20s\n","Name","Email","Phone Number");
	while (p != NULL)
	{
		printf("\t%-20s\t", p->name);
		printf("\t%-20s\t", p->email);
		printf("%-20s\n", p->num);
		p = p->next;
	}
}
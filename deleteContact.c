#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "phonebook.h"
//Function to delete a contact information
void delete_all(Node_t *head)
{
	while(head != NULL)
	{
		Node_t *del = head;
		head = head->next;
		free(del);
	}
}
Node_t * deleteContact(Node_t *head)
{
	Node_t* q = head;
	Node_t* p = head->next;
	
	char name[20];
	
	q = head;
	printf("\n\tEnter the Contact Name to be Deleted: ");
	scanf(" %s", name);
	//scanf_s(" %s", name,50);

	if (q == NULL)
	{
		printf("\n\tPhonebook has no Contacts!\n\n");
	}
	else if(strcmp(q->name , name) == 0)
	{
	    //Delete Front.
	    head = head->next;
	    free(q);
	}
	else
	{
		//Determining whether the names are the same with the entered name and continue traversing
		while (p != NULL && (strcmp(p->name, name) != 0))
		{
			q = p;
			p = p->next;
		}
		if (NULL == p)
		{
			printf("\n\tThere is no such Contact!\n\n");
		}
		else
		{
			q->next = p->next;
			free(p);
			printf("\n\tContact Deleted!\n\n");
		}
	}

	
	
	return head;
}
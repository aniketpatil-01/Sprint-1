#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "phonebook.h"
Node_t * insert(Node_t *head)
{
	Node_t* q = head;
	Node_t* p = q->next;
	
	Node_t *new_node = (Node_t*)malloc(sizeof(Node_t));
	FILE *fp;
	fp = fopen("contacts.txt", "a");
	if (new_node == NULL)
	{
		fprintf(stderr, "Unable to allocate memory for node \n");
		return head;
	}
	new_node->next = NULL;

	printf("\n\tEnter Name: ");
	scanf("%s", new_node->name);
	printf("\n\tEnter Email: ");
	scanf("%s", new_node->email);

	//check whether the phone number has correct number of digits
	while(1==1)
	{
		/* code */
		printf("\tEnter Phone Number: ");
		scanf("%s", new_node->num);
		if (strlen(new_node->num) != 10)
		{
			printf("\n\tInvalid Phone Number!\n\n");
		}
		else
			break;
	}
	if(head == NULL)
		return new_node;

	if( strcmp(new_node->name, head->name) < 0)	//Insert Front
	{
		new_node->next = head;
		head = new_node;
		return head;
	}
	if (NULL == p)
	{
		q->next = new_node;
		new_node = p;
	}
	else
	{
		while (p != NULL && strcmp((new_node->name), (p->name)) > 0)
		{
			p = p->next;
			q = q->next;
		}
		new_node->next = p;
		q->next = new_node;
	}
	fputs("\n",fp);
	fputs(new_node->name, fp);
	fputs(" ",fp);
	fputs(new_node->email, fp);
	fputs(" ",fp);
	fputs(new_node->num, fp);
	fclose(fp);
	return head;
}

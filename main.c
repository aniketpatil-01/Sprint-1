#include <stdio.h>
#include<stdlib.h>
#include "phonebook.h"


int main(void)
{
	int ch;

	Node_t *head = NULL;

	head = importContacts(head);

	printf("\n\t\t\t\t\t\t\tWorking Phonebook\n");

	while(1)
	{
		printf("\n\t\t\t\t\t\t1. New Contact\n");
		printf("\t\t\t\t\t\t2. Search for Contact\n");
		printf("\t\t\t\t\t\t3. Modify Contact\n");
		printf("\t\t\t\t\t\t4. Delete Contact\n");
		printf("\t\t\t\t\t\t5. Show All Contacts\n");
		printf("\t\t\t\t\t\t6. Exit Phonebook\n");
		printf("\n\tEnter your Choice: ");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:head = insert(head);				             
			     break;
			case 2:search(head);
				 break;
			case 3:modify(head);
				 break;
			case 4:head=deleteContact(head);
			        writeToFile(head);
				 break;
			case 5:display(head);
				 break;
			case 6:delete_all(head);
				exit(0);

			default:printf("Invalid choice");
		}
	}
}

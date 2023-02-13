#ifndef PHONEBOOK_H
#define PHONEBOOK_H

//Structure Declaration
#define CONTACT_SIZE	50
#define PHONENO_SIZE	11
struct Node
{
	/* data */
	char name[CONTACT_SIZE];     //name of contact
	char email[CONTACT_SIZE];    //email 
	char num[PHONENO_SIZE];      //phone number of contact
	
	struct Node* next; //next pointer to store the address of next node
};

typedef struct Node Node_t;

//Function Definitions
void display(Node_t *head);
void delete_all(Node_t *head);
Node_t * insert(Node_t *head);
Node_t * deleteContact(Node_t *head);
void search(Node_t *head);
void modify(Node_t *head);
Node_t* importContacts(Node_t *head);
void writeToFile(Node_t *head);

#endif
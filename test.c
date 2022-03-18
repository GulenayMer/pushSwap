/* singly linked list can be traversed in only one direction from head to the last node */

/* 	data -- stores the element
	next -- is a pointer to store the address of the next node
			struct s_data is written before *next; it is a self-referencing pointer; meaning a pointer that points to whatever
			it is part of. 
			Next is a part of a node and it will point to the next node.
*/

/* 
typedef struct Linked_list
{
	int	data;
	struct Linked_list	*next;

} *node;
*/

/* create  node
//typedef struct Linked_list *node;

node	createNode()
{
	node temp; // declare a node
	temp = (node)malloc(sizeof(struct Linked_list)); // allocate memory
	temp->next = NULL; // make next point to 0;
	return temp;
}
*/

/* add a node to the linked list 
node addNode(node head, int value)
{
	node temp, p; // declare 2 nodes 
	temp = createNode(); // createNode will return a new node with data = value  & next pointing to null

	temp->data = value; // add element"s value to data part of node
	if (!head)  
		head = temp; // when linked list is empty
	else
	{
		p = head; // assign head to p
		while (p->next != 0)
			p = p->next; // traverse the list until p is the last node;
			  // last node always points to 0;
	}
	return head;
}
*/



///////
#include <stdio.h>
#include <stdlib.h>

/* self referential structure is a structure which contains a pointer to a structure 
of the same type  

	struct abc
	{
		int a;
		char b;
		struct abc *self;
	}
 */

/*  creating a node of the single linked list : */

	typedef struct s_node
	{
		int data;
		struct s_node *link; // for the single linked list there only one link is allowed.
	} t_node;

/*   int main()
{
	struct node *head = NULL; // the pointer to struct node only
	head = (struct node *)malloc(sizeof(struct node)); 
	// malloc helps us to create a node; memory is allocated for the data and for the linked part
	
	head->data = 45; // via arrow operator, head is accessing the data and it is initiliazing it to eg.45
	head->link = NULL;

	printf("%d", head->data);
	return (0);

} */

/*  inserting a new node on the front of the list  */
void push(int a, t_node **head)
{
	t_node *temp;
	t_node *current = malloc(sizeof(t_node)); // allocate a node -- new node
	
	current->data = a; // put in the data
	current->link = NULL;	// the current node points to the null
	if (!*head)          // if head is null
		*head = current; //move the head to point to the new/current node 
	else
	{
		temp = *head;	// if head is not null, store the head into the temp
		*head = current;  //move the head to point to the new node
		(*head)->link = temp;	// head points to the temp
	}
}

int main()
{
	t_node *head = NULL; // the pointer to struct node only
	//head = (t_node *)malloc(sizeof(t_node)); 
	// malloc helps us to create a node; memory is allocated for the data and for the linked part
	
	//head->data = 45; // via arrow operator, head is accessing the data and it is initiliazing it to eg.45
	//head->link = NULL;
	push(45, &head);
	push(65, &head);

	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->link;
	}
	//printf("%d", head->link->data);
	return (0);
}


// SHIVANSH MISHRA
// CIRCULAR LINKED LIST

#include <stdio.h>
#include <stdlib.h>


struct node {
	int info;
	struct node* next;
};


struct node* last = NULL;

void insertAtFront()
{

	int data;

	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));

	printf("\nEnter data to be inserted: \n");
	scanf("%d", &data);

	if (last == NULL) {
		temp->info = data;
		temp->next = temp;
		last = temp;
	}


	else {
		temp->info = data;
		temp->next = last->next;

		last->next = temp;
	}
}


void addatlast()
{

    int data;
 

    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 

    printf("\nEnter data to be inserted : \n");
    scanf("%d", &data);

    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }

    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void deletefirst()
{
    struct node* temp;

    if (last == NULL)
        printf("\nList is empty.\n");
 

    else {
        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
}


void insertafter()
{

    int data, value;
 

    struct node *temp, *n;
 

    printf("\nEnter number after which"
           " you want to enter number: \n");
    scanf("%d", &value);
    temp = last->next;
 
    do {
 

        if (temp->info == value) {
            n = (struct node*)malloc(sizeof(struct node));
 

            printf("\nEnter data to be"
                   " inserted : \n");
            scanf("%d", &data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;
 

            if (temp == last)
                last = n;
            break;
        }
        else
            temp = temp->next;
    } while (temp != last->next);
}

void deletelast()
{
    struct node* temp;

    if (last == NULL)
        printf("\nList is empty.\n");
 
    temp = last->next;
 

    while (temp->next != last)
        temp = temp->next;
 

    temp->next = last->next;
    last = temp;
}
void Display()
{

	if (last == NULL)
		printf("\nList is empty\n");


	else {
		struct node* temp;
		temp = last->next;

		do {
			printf(" %d ", temp->info);
			temp = temp->next;
		} while (temp != last->next);
	}
}


int menu()
{
    int op;
    printf("\n");
    printf("\nWelcome..!!!\n");
    printf("Enter 1 for insertion at begining\n");
    printf("Enter 2 for insertion at end\n");
    printf("Enter 3 for insertion in between\n");
    printf("Enter 4 for Display\n");
    printf("Enter 5 to QUIT\n");
    printf("Enter 6 to delete first node\n");
    printf("Enter 7 to delete last node\n");
    
    scanf("%d",&op);
    return op;
}

int main()
{

    int count=0;
    while(1)
    {
        switch(menu())
        {
            case 1:
            insertAtFront();
            break;
            
            case 2:
            addatlast();
            break;
            
            case 3:
            insertafter();
            break;
            
            case 4:
            Display();
            break;
            
            case 5:
            exit(0);
            break;
            
            case 6:
            deletefirst();
            break;

            case 7:
            deletelast();
            break;
            
            default:
            printf("Invalid Input\n");
            
        }
    }
    
}



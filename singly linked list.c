/*
 *  Danial Ahmed
 *   Data Structures
 *    https://github.com/D4n1aLLL/Data-Structures
 *
*/

#include<stdio.h>

int menu()
{
	int choice;
	printf("###########################################################\n1.Add\t\t2.View\t\t\t\t3.Delete  #\n4.Search\t5.Insert in mid/at start\t6.Exit    #\n###########################################################\n\n$  ");
	scanf("%d",&choice);
	return(choice);
}

struct Node
{
	int data;
	struct Node *next;
};
struct Node *initial=NULL;

struct Node* create()
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	return(temp);
}

void insertNode()
{
	struct Node *temp,*status;
	temp=create();
	printf("\nEnter Data: ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(initial==NULL)
	{
		initial=temp;
	}
	else
	{
		status=initial;
		while(status->next!=NULL)
		{
			status=status->next;
		}
		status->next=temp;
	}
}

void viewList()
{
	if(initial==NULL)
		printf("\nThe list is empty.\n");
	else
	{
		int index=0;
		struct Node *status=initial;
		while(status!=NULL)
		{
			printf("LIST[%d]-->%d\t",index,status->data);
			index++;
			status=status->next;
		}
		printf("\n\n");
	}
}

void deleteNode()
{
	int nodeNum;
	printf("Enter the node number you want to delete: ");
	scanf("%d",&nodeNum);
	struct Node *status=initial;
	int counter=0;
	struct Node *prev=NULL,*curr=initial;
	if(nodeNum==0)
	{
		initial=curr->next;
	}
	else
	{
		while(curr!=NULL)
		{
			if(counter==nodeNum)
			{
				prev->next=curr->next;
				break;
			}
			counter++;
			prev=curr;
			curr=curr->next;
		}
	}
}

void insertAtPosition()
{
	int index=0,indexPosi,data,counter=0;
	printf("Enter index number where you want to insert data: ");
	scanf("%d",&indexPosi);
	struct Node *status=initial;
	while(status!=NULL)
	{
		counter++;
		status=status->next;
	}
	if(counter>indexPosi)
	{
		struct Node *temp=create();
		printf("Enter data: ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(indexPosi==0)
		{
			temp->next=initial;
			initial=temp;
		}
		else
		{
			struct Node *prev=NULL,*curr=initial;
			while(curr!=NULL)
			{
				if(index==indexPosi)
				{
					prev->next=temp;
					temp->next=curr;
				}
				prev=curr;
				curr=curr->next;
				index++;
			}
		}
	}
	else
	{
		printf("Cant insert at index %d\n",indexPosi);
	}
	
}

void searchValue()
{
	int number;
	printf("Enter number to search: ");
	scanf("%d",&number);
	int index=0,check=0;
	struct Node *status=initial;
	if(initial!=NULL)
	{
		while(status!=NULL)
		{	
			if(status->data==number)
			{
				check=1;
				break;
			}
		status=status->next;
		}
		if(check==1)
		{
			printf("Found at %d\n",index);
		}
		else
		{
			printf("Not found.\n");
		}
	}
	else
	{
		printf("The list is emtpy.");
	}
}
void main()
{
	while(1)
	{
		switch(menu())
		{
			case 1:
				insertNode(); break;
			case 2:
				viewList(); break;
			case 3:
				deleteNode(); break;
			case 4:
				searchValue(); break;
			case 5:
				insertAtPosition(); break;
			case 6:
				printf("Exiting ....");
				exit(0);
			default:
				printf("Something went wrong.\n");
		}
	}
}

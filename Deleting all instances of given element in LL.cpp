#include<stdio.h>
#include<stdlib.h>

struct Node
	{
		int data;
		struct Node *next;
	}*head=NULL;
	
int create()
	{
		int n;  	
		printf("Enter the nO. of Nodes : ");
		scanf("%d",&n);
		printf("\n");
		struct Node *temp,*tail;
		for(int i=0;i<n;i++)	//Creating n  nodes
			{
				temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter data for Node %d :",i+1);
				scanf("%d",&temp->data);
				temp->next=NULL;
				if(head==NULL)
					{
						head=temp;
						tail=temp;
					}
				else
					{
						tail->next=temp;
						tail=temp;
					}
					
			}
			temp->next=NULL;
			
	}
	
	
int Delete(struct Node *p,int value)		// DElETING NODE ASSUMING LL CONTAINS UNIQUE ELEMENTS
	{
	struct Node *previous,*current;
	previous=NULL;
	current=p;
	while(current->data!=value)
		{
			previous=current;
			current=current->next;
		}
		previous->next=current->next;
	}
	

int display(struct Node *p)	//DISP
	{
		while(p!=NULL)
			{
				printf("%d ",p->data);
				p=p->next;
			}
			printf("\n\n");
	}

int main()
	{
		create();
		printf("\n------------------------------------------\n");
		display(head);
		Delete(head,3);
		printf("Linked List after deleting : ");
		display(head);

			
	}

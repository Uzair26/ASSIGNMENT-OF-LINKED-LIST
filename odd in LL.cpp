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
		printf("Enter no. of Nodes : ");
		scanf("%d",&n);
		printf("\n");
		struct Node *temp,*tail;
		for(int i=0;i<n;i++)	//Creating n nodes
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
	
void display(struct Node *p)	//DISP
	{
		while(p!=NULL)
			{
				printf("%d ",p->data);
				p=p->next;
			}
			printf("\n\n");
	}

void odd(struct Node *p)
	{
		printf("\nOdd values in linked list are :\n");
		while(p!=NULL)
			{
				if(p->data%2!=0)
					{
						printf("%d ",p->data);
					}
					p=p->next;
			}
	}

int main()
	{
		create();
		display(head);
		odd(head);
	}


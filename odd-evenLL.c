#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;

}*head=NULL , *tail;

void create(int n)
{
	int i;
	for (i=0;i<n;i++)
        {
        	struct node*temp =(struct node*)malloc(sizeof(struct node));
			printf("ENTER DATA FOR NODES : ");
			scanf("%d",&temp->data);
			if(head==NULL)
			{
				head=temp;
				temp->next=NULL;
				tail=temp;
	
				
			 } 
			 
			 else
			 {
			 	tail->next=temp;
			 	temp->next=NULL;
			 	tail=temp;
			 }
        	
        }
        
}


void disp(struct node *p)
{
	
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
	
	
  }  
  
  
  
  
  
  
void odd(struct node *p)
{
	printf("PRINTING ODD NUMBERS IN LINKED LIST \n");
	while(p!=NULL)
	{
		if(p->data%2!=0)
		{
		
		printf("%d ",p->data);
		p=p->next;
	    }
	}
	printf("\n");
	
	
  }  
  
  
  
  
 void even(struct node *p)
{
	printf("PRINTING EVEN NUMBERS IN LINKED LIST \n");
	while(p!=NULL)
	{
		if(p->data%2==0)
		{
		
		printf("%d ",p->data);
		p=p->next;
	    }
	}
	printf("\n");
	
	
  }  
  
  
  

int main()
{
	
	create(6);
		disp(head);
	odd(head);
	even(head);
	
}


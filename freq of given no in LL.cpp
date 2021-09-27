#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;

}*head=NULL;


int create()
{
	int n;
	printf("NO OF NODES : ");
	scanf("%d",&n);
	 
	 printf("\n");
	 
	 struct node *temp,*tail;
	 for(int i=0;i<n;i++)                                //n no.of nodes
     {
     	temp=(struct node*)malloc(sizeof(struct node));
     	printf("DATA OF NODE %d :",i+1);
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




int freq(struct node*p,int value)
{
	int count=0;
	while(p!=NULL)
	{
		if(p->data==value) count++;
		p=p->next;
	}
	return count;
}





int main()
{
	create();
	printf("FREQ = %d ",freq(head,2));
}

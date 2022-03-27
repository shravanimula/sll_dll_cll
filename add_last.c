#include"myheader.h"
struct Employee * Add_last(struct Employee *ptr)
{
	struct Employee *newnode=NULL,*temp=NULL;
	newnode=malloc(sizeof(struct Employee));
	if(newnode==NULL)
	{
		printf("Node not  created\n");
	}
	else
	{
		printf("enter the empid\n");
		scanf("%d",&newnode->empid);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		if(ptr==NULL)// if list is empty
		{
			ptr=newnode; // add newnode as first node
			ptr->link=NULL;
		}
		else
		{	// if list already existing, traverse upto last node and link mto last node
			temp=ptr;
			while(temp->link!=NULL)// traverseing upto lastnode
			{
				temp=temp->link; // moving to next node
			}
			temp->link=newnode;  // forward linking;
			newnode->prev=temp; // backward linking;
		}
	}
	return ptr;
}

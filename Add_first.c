#include"myheader.h"
struct Employee * Add_first(struct Employee *ptr)
{
	struct Employee *newnode=NULL;
	/******* creation of node******/
	newnode=malloc(sizeof(struct Employee));
	if(newnode==NULL)	
	{
		printf("Node not created\n");	
	}
	else
	{
		printf("enter the empid\n");
		scanf("%d",&newnode->empid);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		newnode->link=NULL;
		newnode->link=ptr; // assignoing existing first node address to newnode link
		if(ptr)  
		{
			ptr->prev=newnode; // backward linking
		}
		ptr=newnode;  
	}
	return ptr;// returning first node address
}

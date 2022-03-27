#include"myheader.h"
struct Employee * Del_data(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	int data;
	printf("enter the data to be deleted\n");
	scanf("%d",&data);
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}							
	else if(data==ptr->empid)  	
	{
		ptr=Del_first(ptr);
	}
	else
	{
		temp=ptr;	
		while(temp && temp->empid!=data)
		{
			temp=temp->link;//move to next node 
		}
		if(temp==NULL)
		{
			printf("%d is not found\n",data);
		}
		else
		{
			temp->prev->link=temp->link;  // connect before node with next noden of temp forward linking
			if(temp->link)
				temp->link->prev=temp->prev; 
			free(temp);
			temp=NULL;	
		}
	}
	return ptr;
}


#include"myheader.h"
void RDisplay(struct Employee *ptr)
{
	if(ptr==NULL)		
	{
		printf("list is empty\n");
	}
	else
	{
		for(;ptr->link!=NULL;ptr=ptr->link);// iterates until it reaches the lastnode
		while(ptr)// right now ptr is at last node
		{
			printf("\n%d %s\n",ptr->empid,ptr->name);
			ptr=ptr->prev;
		}
	}
}

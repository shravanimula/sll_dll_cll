#include"myheader.h"
struct Employee *Del_first(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");									
	}
	else
	{
		temp=ptr;// assigning first node address to temp
		ptr=ptr->link; // moving ptr to next node
		if(ptr) // if ptr is not NULL
		{
			ptr->prev=NULL; // then assign NULL to its prev
		}
		free(temp); // deleting first node
		temp=NULL;
	}
	return ptr;
}

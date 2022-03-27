#include"myheader.h"
struct Employee * Del_last(struct Employee* ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		for(temp=ptr;temp->link!=NULL;temp=temp->link);
		if(temp->prev)
			temp->prev->link=NULL;
		else
			ptr=NULL;
		free(temp);
		temp=NULL;
	}
	return ptr;
}

#include"myheader.h"
void Display(struct Employee *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d %s \n",ptr->empid,ptr->name);
			ptr=ptr->link;// moving to next node
		}
	}
}

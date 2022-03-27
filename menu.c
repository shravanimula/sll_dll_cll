#include"myheader.h"
int main()
{
	struct Employee *head=NULL;
	int choice;
	while(1)
	{
		printf("1. Add_last	2.Display	3.RDisplay 4.Del_first 7.exit 6.Del_last  5.Del_data 8.Add_first\n");
		printf("enter the choice\n");	
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Add_last(head);
				break;
			case 2: Display(head);
				break;
			case 3: RDisplay(head);// prints from last node to first node
				break;
			case 4: head=Del_first(head);
				break;
			case 5: head=Del_data(head);
				break;
			case 6: head=Del_last(head);
				break;
			case 7:exit(0);
			case 8:head=Add_first(head);
			       break;
			}
	}
}

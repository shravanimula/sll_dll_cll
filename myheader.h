#include<stdio.h>
#include<stdlib.h>
struct Employee
{
	int empid;
	char name[20];
	struct Employee *prev,*link;
};
struct Employee * Add_last(struct Employee *);
void Display(struct Employee *);
void RDisplay(struct Employee *);
struct Employee * Del_first(struct Employee *);
struct Employee * Del_last(struct Employee *);
struct Employee * Del_data(struct Employee *);
struct Employee * Add_first(struct Employee *);

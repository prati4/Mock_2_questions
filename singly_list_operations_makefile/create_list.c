#include "header.h"
/*
 struct sll
{
 int data;
 struct sll *link;
};


 struct sll *first=NULL;
 struct sll *last=NULL;

*/
void create(int ele)
{
struct sll *ptr=(struct sll*)malloc(sizeof(struct sll));
ptr->data=ele;
ptr->link=NULL;


if(first==NULL)
{

first=ptr;
last=ptr;
}
else
{
last->link=ptr;
last=ptr;
}
}


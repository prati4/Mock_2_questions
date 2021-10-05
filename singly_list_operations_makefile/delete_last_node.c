#include "header.h"

/*
struct sll
{
 int data;
 struct sll *link;
};


struct sll *first;
struct sll *last;

*/

void delete_last_node()
{
struct sll *temp=first;
struct sll *ptr=NULL;
while(temp->link!=NULL)
{
ptr=temp;
temp=temp->link;
}
ptr->link=NULL;
free(temp);


}

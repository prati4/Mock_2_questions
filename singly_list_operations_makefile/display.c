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
void display()
{
    if(first==NULL)
    {
        printf("empty list\n");

    }
    else
    {
        struct sll *temp=first;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        } //while (temp!=first);
        
    }
}

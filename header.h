#include<stdio.h>
#include<stdlib.h>


struct sll
{
 int data;
 struct sll *link;
};


 struct sll *first;
 struct sll *last;
 
 
 void create(int);
 void display();
 void delete_front_node();
 void delete_last_node();

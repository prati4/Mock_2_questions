#include "header.h"

/*

typedef struct sll
{
 int data;
 struct sll *link;
}node;


struct sll *first;
struct sll *last;
*/

void delete_front_node()
{
struct sll *temp=first;
first =first->link;
free (temp);

}

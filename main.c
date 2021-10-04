#include "header.h"




int main()
{

create(1);
create(2);
create(3);
create(4);

printf("displaying\n");
display();

printf("\ndelete front node\n");
delete_front_node();
display();

printf("\ndelete last node\n");
delete_last_node();
display();

return 0;
}


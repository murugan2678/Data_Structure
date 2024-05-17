#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node * next;
};

int main()
{
  struct Node * head;
  printf("%ld\n",sizeof(head));
}

/* output

   murugan@AI:~/data_structure/3may24$ gcc 1.c
   murugan@AI:~/data_structure/3may24$ ./a.out
   8                                                */

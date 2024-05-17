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
  printf("%d\n", sizeof(head));
  head = (struct Node *)malloc(sizeof(struct Node));
  printf("%d\n",sizeof(head));
}


/* output

   murugan@AI:~/data_structure/3may24$ gcc 2.c
   murugan@AI:~/data_structure/3may24$ ./a.out
   8    ---> 8bytes
   8    ---> 8bytes              */

// single list

#include <stdio.h>
struct Node
{
  int data;
  struct Node *Next;
};

int main()
{
  struct Node *ptr;
  ptr->data = 10;
  printf("%d\n",ptr->data);
}

/* output

   murugan@AI:~/data_structure/2may24$ vi 3.c
   murugan@AI:~/data_structure/2may24$ gcc 3.c
   murugan@AI:~/data_structure/2may24$ ./a.out

   Segmentation fault (core dumped)  */

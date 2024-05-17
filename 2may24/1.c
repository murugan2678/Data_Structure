#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  
  // void *malloc(size_t size);
  ptr = (int *)malloc(sizeof(int));

  printf("%p\n",ptr);
}

/* output

   murugan@AI:~/data_structure/2may24$ gcc 1.c
   murugan@AI:~/data_structure/2may24$ ./a.out

   0x5a008984c2a0     */

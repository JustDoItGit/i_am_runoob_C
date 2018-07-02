#include <stdio.h>
 
const int MAX = 4;
 
int main ()
{
   char Zara[] = "Zara Ali";
   const char *names[] = {
                   Zara,
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
   int i = 0;
 
   for ( i = 0; i < MAX; i++)
   {
      printf("Value of names[%d] = %s\n", i, names[i] );
      printf("Address of names[%d] = %p p\n", i, names[i] );
      printf("Address of names[%d] = %x x\n", i, names[i] );
      printf("Address of names[%d] = %p p\n", i, &names[i] );
      printf("Address of names[%d] = %x x\n", i, &names[i] );
      printf("Address of names[%d] = %p p\n", i, *names[i] );
      printf("Address of names[%d] = %x x\n", i, *names[i] );
   }
   return 0;
}

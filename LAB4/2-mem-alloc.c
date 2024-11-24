#include <stdio.h>
#include <stdlib.h>

void main()
{
      int *a;
      float *b;
      int c[10];
      
      printf("\n 65070503408 \n\n\n ");
            
      printf("\nAddress of Pointer\n");
      printf(">>%p\n", &a);
      printf(">>%p\n", &b);
      printf("Make the answer right here >>> \n\n\n\n\n\n");
      
      printf("\nEffective Address\n");
      printf(">>%p\n", a);
      printf(">>%p\n", b);
      printf("Make the answer right here >>> \n\n\n\n\n\n");
      
      a = (int*) malloc(10*sizeof(int));
      printf("\nAfter malloc Pointer a\n");
      printf(">>%p\n", a);
      printf(">>%p\n", &a[0]);
      printf(">>%p\n", &a[9]);
      printf("Make the answer right here >>> \n\n\n\n\n\n");
      
      printf("\nArray c\n");
      printf(">>%p\n", c);
      printf(">>%p\n", &c[0]);
      printf(">>%p\n", &c[9]);
      printf("Make the answer right here >>> \n\n\n\n\n\n");
      
     b = (float*) malloc(10*sizeof(float));
      printf("\nAfter malloc Pointer b\n");
      printf(">>%p\n", b);
      printf(">>%p\n", &b[0]);
      printf(">>%p\n", &b[9]);
      printf("Make the answer right here >>> \n\n\n\n\n\n");
  
      a = (int*) realloc(a, 1000*sizeof(int));
      printf("\nAfter realloc Pointer a\n");
      printf(">>%p\n", a);
      printf(">>%p\n", &a[0]);
      printf(">>%p\n", &a[9]);
      printf(">>%p\n", &a[999]);
      printf("Make the answer right here >>> \n\n\n\n\n\n");
            
      free(a);
      free(b);
}
